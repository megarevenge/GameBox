#include "sudokuwindow.h"
#include "./ui_sudokuwindow.h"
#include <QGridLayout>
#include <QVBoxLayout>
#include <QIntValidator>
#include <QRandomGenerator>
#include <QMessageBox>
#include "mainwindow.h"
#include <QFile>


// Constructer
SudokuWindow::SudokuWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::SudokuWindow),
m_scoreManager("mine_scores.dat", "sudoku_scores.dat")
{
    ui->setupUi(this);

    // Timer
    gameTimer = new QTimer(this);
    gameTimer->setInterval(1000);
    connect(gameTimer, &QTimer::timeout, this, &SudokuWindow::onTimerTick);

    // How many left numbers
    createLeftPanel();

    // Main board
    CreateBoard();

    // Removing random cells
    RemoveCells();

    // Show initial state
    updateLeftNumbers();
    updateScoreLabel();
    updateTimerLabel();
}

// Destructer
SudokuWindow::~SudokuWindow()
{
    delete ui;
}

// Base stryle
QString SudokuWindow::cellBaseStyle(int x, int y) const
{
    QString style =
        "font-size: 18px;"
        "font-weight: bold;"
        "background-color: white;";

    // Thick borders at 3×3 box edges, thin otherwise
    style += "border-top: "    + QString(x % 3 == 0 ? "3px" : "1px") + " solid black;";
    style += "border-left: "   + QString(y % 3 == 0 ? "3px" : "1px") + " solid black;";
    style += "border-right: "  + QString(y == 8     ? "3px" : "1px") + " solid black;";
    style += "border-bottom: " + QString(x == 8     ? "3px" : "1px") + " solid black;";
    return style;
}

// Creates board
void SudokuWindow::CreateBoard()
{
    // Remove old layout cleanly
    if (QLayout *old = ui->boardWidget->layout()) {
        QLayoutItem *item;
        while ((item = old->takeAt(0)) != nullptr) {
            if (item->widget()) item->widget()->deleteLater();
            delete item;
        }
        delete old;
    }

    QGridLayout *grid = new QGridLayout();
    grid->setSpacing(0);
    grid->setContentsMargins(0, 0, 0, 0);

    // Giving solved sudoku to lineEdits
    for (int x = 0; x < 9; x++) {
        for (int y = 0; y < 9; y++) {
            // Style for board
            cells[x][y] = new QLineEdit();
            cells[x][y]->setFixedSize(50, 50);
            cells[x][y]->setAlignment(Qt::AlignCenter);
            cells[x][y]->setMaxLength(1);
            cells[x][y]->setValidator(new QIntValidator(1, 9, this));

            // Pre-fill with the solved value (read-only, black)
            QString preStyle = cellBaseStyle(x, y) + "color: black;";
            cells[x][y]->setStyleSheet(preStyle);
            cells[x][y]->setText(QString::number(board[x][y]));
            cells[x][y]->setReadOnly(true);

            connect(cells[x][y], &QLineEdit::textChanged, this,
                    [this, x, y](const QString &text) {
                        CheckInput(x, y, text);
                        updateLeftNumbers();
                        checkWin();
                    });

            grid->addWidget(cells[x][y], x, y);
        }
    }
    ui->boardWidget->setLayout(grid);
}

// Removes 40 random cells
void SudokuWindow::RemoveCells(){
    int removed = 0;

    while (removed < 40) {

        int row = QRandomGenerator::global()->bounded(9);
        int col = QRandomGenerator::global()->bounded(9);

        if (!cells[row][col]->text().isEmpty()) {
            cells[row][col]->setText("");
            cells[row][col]->setReadOnly(false);

            cells[row][col]->setStyleSheet(cellBaseStyle(row, col) + "color: #0055cc;");
            removed++;
        }
    }
}

// Check user input
void SudokuWindow::CheckInput(int x, int y, const QString &text){

    if (cells[x][y]->isReadOnly()) return;
    if (text.isEmpty()) {
        // Reset to neutral editable style when cleared
        cells[x][y]->setStyleSheet(cellBaseStyle(x, y) + "color: #0055cc;");
        return;
    }

    // Start timer on very first input
    if (!isStarted) {
        isStarted = true;
        elapsedSeconds = 0;
        gameTimer->start();
    }

    bool ok;
    int number = text.toInt(&ok);
    if (!ok) return;

    if (number == board[x][y]) {
        // Correct — green, lock the cell
        cells[x][y]->setStyleSheet(cellBaseStyle(x, y) + "color: green;");
        // User can't change the variable
        cells[x][y]->setReadOnly(true);

        if (!solvedCells[x][y]) {
            points += 3;
            solvedCells[x][y] = true;
        }

        points += 3;
    } else {
        // Wrong — red
        cells[x][y]->setStyleSheet(cellBaseStyle(x, y) + "color: red;");
        if (points >= 2) points -= 2;
    }

    updateScoreLabel();
}

// Creating left panel
void SudokuWindow::createLeftPanel(){
    if (ui->leftWidget->layout()) return;

    QVBoxLayout *layout = new QVBoxLayout();
    layout->setSpacing(4);
    layout->setContentsMargins(8, 8, 8, 8);

    for (int i = 0; i < 9; i++) {
        leftNumber[i] = new QLabel(this);
        leftNumber[i]->setStyleSheet(
            "color: black;"
            "font-size: 18px;"
            "font-weight: bold;"
            );
        layout->addWidget(leftNumber[i]);
    }

    layout->addStretch();
    ui->leftWidget->setLayout(layout);
}

// Updates all time when user inputs the data
void SudokuWindow::updateLeftNumbers()
{
    // Count how many times each digit 1-9 on the board now
    int count[10] = {0};
    for (int x = 0; x < 9; x++) {
        for (int y = 0; y < 9; y++) {
            const QString t = cells[x][y]->text();
            if (!t.isEmpty()) {
                int n = t.toInt();
                if (n >= 1 && n <= 9) count[n]++;
            }
        }
    }

    for (int i = 1; i <= 9; i++) {
        int left = 9 - count[i] >= 0 ? 9 - count[i] : 0;
        if (leftNumber[i - 1]) {
            QString color = left == 0 ? "color: green;" : "color: black;";
            leftNumber[i - 1]->setStyleSheet(
                "font-size: 16px; font-weight: bold;" + color
                );
            leftNumber[i - 1]->setText(
                QString("Number (%1) left: %2").arg(i).arg(left)
                );
        }
    }
}

// Checks if all board solved
void SudokuWindow::checkWin(){
    for (int x = 0; x < 9; x++) {
        for (int y = 0; y < 9; y++) {

            // Empty cell -> not solved
            if (cells[x][y]->text().isEmpty())
                return;

            // Wrong value -> not solved
            if (cells[x][y]->text().toInt() != board[x][y])
                return;
        }
    }

    // Stop timer
    gameTimer->stop();

    QString nickname;
    QFile file("nickname.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        nickname = in.readLine().trimmed();
        file.close();
    }

    if (nickname.isEmpty()) {
        nickname = "Unknown";
    }

    // Save to sudokuFile via ScoreManager
    m_scoreManager.updateSudokuScore(nickname, elapsedSeconds);

    QMessageBox::StandardButton reply = QMessageBox::question(
        this,
        "Victory!",
        QString("Congratulations!\n\n"
                "You solved the Sudoku!\n"
                "Score: %1\n"
                "Time: %2:%3\n\n"
                "Do you want to play again? ")
            .arg(points)
            .arg(elapsedSeconds / 60, 2, 10, QChar('0'))
            .arg(elapsedSeconds % 60, 2, 10, QChar('0')),
        QMessageBox::Yes | QMessageBox::No
        );

    if(reply == QMessageBox::Yes){
        on_resetButton_clicked();
    }else{
        on_backButton_clicked();
    }

    // saidjanov
    // Save here to scoreboard.txt
    // nickname: points - ....
    //          time -  (elapsedSeconds / 60, 2, 10, QChar('0'):(elapsedSeconds % 60, 2, 10, QChar('0')

}

// Updates all time when user inputs the data
void SudokuWindow::updateScoreLabel()
{
    if (ui->scoreLabel)
        ui->scoreLabel->setText(QString("Score: %1").arg(points >= 0 ? points : 0));
}

void SudokuWindow::updateTimerLabel()
{
    if (ui->timerLabel) {
        int mm = elapsedSeconds / 60;
        int ss = elapsedSeconds % 60;
        ui->timerLabel->setText(
            QString("Time: %1:%2")
                .arg(mm, 2, 10, QChar('0'))
                .arg(ss, 2, 10, QChar('0'))
            );
    }
}

void SudokuWindow::onTimerTick()
{
    elapsedSeconds++;
    updateTimerLabel();
}

// Reset button
void SudokuWindow::on_resetButton_clicked()
{
    // Stop and reset timer
    gameTimer->stop();
    isStarted = false;
    elapsedSeconds = 0;
    points = 0;
    for (int x = 0; x < 9; x++) {
        for (int y = 0; y < 9; y++) {
            solvedCells[x][y] = false;
        }
    }

    CreateBoard();
    RemoveCells();
    updateLeftNumbers();
    updateScoreLabel();
    updateTimerLabel();
}

// Back to menu saidjanov
void SudokuWindow::on_backButton_clicked(){
    MainWindow* a = new MainWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

// cheat button
void SudokuWindow::on_pushButton_clicked(){
    cells[0][0]->setText("");
    for (int x = 0; x < 9; x++) {
        for (int y = 0; y < 9; y++) {
            if(x == 0 && y == 0)
                continue;
            cells[x][y]->setText(QString::number(board[x][y]));
        }
    }
    cells[0][0]->setReadOnly(false);
}