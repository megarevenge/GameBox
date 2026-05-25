#include "tictactoe.h"
#include <QGridLayout>
#include <QVBoxLayout>
#include <QTimer>
#include <QMessageBox>
#include <cstdlib>
#include <ctime>
#include "mainwindow.h"

TicTacToe::TicTacToe(QWidget *parent) : QWidget(parent), gameEnd(false)
{
    srand(time(nullptr)); // seed random number generator

    setWindowTitle("Tic Tac Toe");
    this->setObjectName("TicTacToeWindow");

    this->setStyleSheet("QWidget#TicTacToeWindow { background-color: #e6eeff; }");

    QVBoxLayout *main = new QVBoxLayout(this);

    // Status label shown above the board
    statusLabel = new QLabel("Your turn", this);
    statusLabel->setStyleSheet("font-family: 'Roboto', sans-serif;"
                               "font-size: 25px;"
                               "color: black;");
    statusLabel->setAlignment(Qt::AlignCenter);
    main->addWidget(statusLabel);

    // Board container widget
    QWidget *boardWidget = new QWidget(this);
    QGridLayout *grid = new QGridLayout(boardWidget);
    grid->setSpacing(0);
    grid->setContentsMargins(0, 0, 0, 0);

    boardWidget->setFixedSize(300, 300);

    // Create 9 buttons for the board
    for (int i = 0; i < 9; i++) {
        board[i] = 0; // 0 = empty, 1 = X (player), 2 = O (computer)
        buttons[i] = new QPushButton("", boardWidget);
        buttons[i]->setStyleSheet(
            "QPushButton {"
            "   background-color: #6699ff;"
            "   color: white;"
            "   border: 2px solid #e6eeff;"
            "   border-radius: 0px;"
            "}"
            "QPushButton:hover {"
            "   background-color: #4d88ff;"
            "}"
            );
        buttons[i]->setFixedSize(100, 100);
        buttons[i]->setFlat(true); // transparent background, lines visible

        // Set large bold font for X and O
        QFont f = buttons[i]->font();
        f.setPointSize(24);
        f.setBold(true);
        buttons[i]->setFont(f);

        // Connect each button to the click handler, passing its index
        connect(buttons[i], &QPushButton::clicked, this, [this, i]() { onButtonClicked(i); });
        grid->addWidget(buttons[i], i / 3, i % 3); // row = i/3, col = i%3
    }

    main->addWidget(boardWidget, 0, Qt::AlignCenter);

    QPushButton *backButton = new QPushButton("Back to Menu", this);

    backButton->setStyleSheet(
        "QPushButton {"
        "   font-family: 'Roboto', sans-serif;"
        "   color: black;"
        "   border: none;"
        "   padding: 0.7em 1.7em;"
        "   font-size: 18px;"
        "   border-radius: 10px;"
        "   background-color: #99bbff;"
        "}"
        "QPushButton:hover {"
        "   background-color: #80aaff;"
        "}"
        );

    connect(backButton, &QPushButton::clicked, this, &TicTacToe::handleBack);

    main->addWidget(backButton, 0, Qt::AlignCenter);

}

void TicTacToe::handleBack(){
    MainWindow* a = new MainWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

void TicTacToe::onButtonClicked(int index)
{
    // Ignore click if game is over or cell is already taken
    if (gameEnd || board[index] != 0) return;

    // Player places X
    board[index] = 1;
    buttons[index]->setText("X");

    // Check if player wins
    if (checkWinner(1)) { setWinner("You win!"); return; }

    // Check for draw
    bool full = true;
    for (int i = 0; i < 9; i++) if (board[i] == 0) { full = false; break; }
    if (full) { setWinner("Draw!"); return; }

    // Disable board and wait 500ms before computer moves
    statusLabel->setText("Computer's turn");
    setEnabled(false);
    QTimer::singleShot(500, this, [this]() {
        computerMove();
        setEnabled(true);
    });
}

void TicTacToe::computerMove()
{
    // Step 1: check if computer can win this turn
    int win = findWinningMove(2);
    if (win != -1) {
        board[win] = 2;
        buttons[win]->setText("O");
        if (checkWinner(2)) { setWinner("Computer wins!"); return; }
        statusLabel->setText("Your turn");
        return;
    }

    // Step 2: block player if there are two X in a row
    int block = findWinningMove(1);
    if (block != -1) {
        board[block] = 2;
        buttons[block]->setText("O");
        statusLabel->setText("Your turn");
        return;
    }

    // Step 3: no strategic move, pick a random empty cell
    int empty[9], count = 0;
    for (int i = 0; i < 9; i++) if (board[i] == 0) empty[count++] = i;
    if (count == 0) return;

    int idx = empty[rand() % count];
    board[idx] = 2;
    buttons[idx]->setText("O");

    // Check if computer wins after move
    if (checkWinner(2)) { setWinner("Computer wins!"); return; }

    // Check for draw after computer move
    bool full = true;
    for (int i = 0; i < 9; i++) if (board[i] == 0) { full = false; break; }
    if (full) { setWinner("Draw!"); return; }

    statusLabel->setText("Your turn");
}

// Scans all 8 lines to find a cell where 'player' can win next move
// Returns the index of that cell, or -1 if not found
int TicTacToe::findWinningMove(int player)
{
    int lines[8][3] = {
        {0,1,2},{3,4,5},{6,7,8}, // rows
        {0,3,6},{1,4,7},{2,5,8}, // columns
        {0,4,8},{2,4,6}          // diagonals
    };
    for (auto &line : lines) {
        int count = 0, empty = -1;
        for (int j = 0; j < 3; j++) {
            if (board[line[j]] == player) count++;
            else if (board[line[j]] == 0) empty = line[j];
        }
        // Two of this player's symbols and one empty cell = winning move
        if (count == 2 && empty != -1) return empty;
    }
    return -1;
}

// Returns true if 'player' has three in a row anywhere on the board
bool TicTacToe::checkWinner(int player)
{
    int lines[8][3] = {
        {0,1,2},{3,4,5},{6,7,8},
        {0,3,6},{1,4,7},{2,5,8},
        {0,4,8},{2,4,6}
    };
    for (auto &line : lines)
        if (board[line[0]] == player && board[line[1]] == player && board[line[2]] == player)
            return true;
    return false;
}

// Shows result in a message box, asks to play again or quit
void TicTacToe::setWinner(QString msg)
{
    gameEnd = true;
    statusLabel->setText(msg);

    QMessageBox box(this);
    box.setWindowTitle("Game End");
    box.setText(msg);
    box.addButton("Play Again", QMessageBox::AcceptRole);
    box.addButton("Back to menu", QMessageBox::RejectRole);

    if (box.exec() == -1) return;

    if (box.clickedButton()->text() == "Play Again"){
        resetGame();
    }
    else{
        MainWindow* a = new MainWindow(); // Create the menu
        a->show();
        this->hide(); // hide current window
    }

}

// Resets board to initial state for a new game
void TicTacToe::resetGame()
{
    gameEnd = false;
    for (int i = 0; i < 9; i++) {
        board[i] = 0;
        buttons[i]->setText("");
    }
    statusLabel->setText("Your turn");
}