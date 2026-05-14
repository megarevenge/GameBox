#include "wordliwindow.h"
#include "./ui_wordliwindow.h"
#include <QMessageBox>
#include "randomword.h"

WordliWindow::WordliWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WordliWindow)
{
    ui->setupUi(this);

    ui->checkButton->setFocusPolicy(Qt::NoFocus);
    targetWord = QString::fromStdString(getRandomWord());
}

WordliWindow::~WordliWindow()
{
    delete ui;
}


QLabel* WordliWindow::getCell(int row, int col) {
    QString cellName = QString("cell_%1_%2").arg(row).arg(col);
    return ui->centralwidget->findChild<QLabel*>(cellName);
}


void WordliWindow::keyPressEvent(QKeyEvent *event) {
    QString key = event->text().toUpper();


    if (key.length() == 1 && key[0].isLetter()) {
        if (currentCol < MAX_COLS && currentRow < MAX_ROWS) {
            QLabel *cell = getCell(currentRow, currentCol);
            if (cell) {
                cell->setText(key);
                cell->setAlignment(Qt::AlignCenter);
                cell->setStyleSheet("font-size: 32px; font-weight: bold; color: white; border: 2px solid #808080;");
                currentCol++;
            }
        }
    }

    else if (event->key() == Qt::Key_Backspace) {
        if (currentCol > 0) {
            currentCol--;
            QLabel *cell = getCell(currentRow, currentCol);
            if (cell) {
                cell->clear();
                cell->setStyleSheet("");
            }
        }
    }

    else if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        on_checkButton_clicked();
    }
}

void WordliWindow::on_checkButton_clicked() {

    if (currentCol < MAX_COLS) {
        QMessageBox::warning(this, "Attention", "Please enter all 5 letters!");
        return;
    }


    QString currentGuess = "";


    for (int col = 0; col < MAX_COLS; ++col) {
        QLabel *cell = getCell(currentRow, col);
        if (cell) currentGuess += cell->text();
    }

    for (int col = 0; col < MAX_COLS; ++col) {
        QLabel *cell = getCell(currentRow, col);
        if (!cell) continue;
        QChar letter = currentGuess[col];
        QString color = "#3a3a3c";
        if (targetWord[col] == letter) {
            color = "#538d4e";
        } else if (targetWord.contains(letter)) {
            color = "#b59f3b";
        } else {
            QString currentUsed = ui->usedCharsLabel->text();
            if (!currentUsed.contains(letter)) {
                ui->usedCharsLabel->setText(currentUsed + " " + QString(letter));
            }
        }

        cell->setStyleSheet(QString(
                                "background-color: %1; "
                                "color: white; "
                                "font-size: 32px; "
                                "font-weight: bold; "
                                "border-radius: 4px;"
                                ).arg(color));
    }


    if (currentGuess == targetWord) {
        QMessageBox::information(this, "Victory!", "Congratulations! You guessed the word!");
        return;
    }

    if (currentRow < MAX_ROWS - 1) {
        currentRow++;
        currentCol = 0;
    } else {
        QMessageBox::critical(this, "Game Over", "No more tries! The word was: " + targetWord);
    }
}

void WordliWindow::resetGame()
{
    currentRow = 0;
    currentCol = 0;

    targetWord = QString::fromStdString(getRandomWord());

    ui->usedCharsLabel->clear();

    for (int row = 0; row < MAX_ROWS; row++) {
        for (int col = 0; col < MAX_COLS; col++) {
            QLabel *cell = getCell(row, col);
            if (cell) {
                cell->clear();
                cell->setStyleSheet("");
            }
        }
    }
}

void WordliWindow::on_restartButton_clicked()
{
    resetGame();
}