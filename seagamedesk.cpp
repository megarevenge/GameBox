#include "seagamedesk.h"
#include "ui_seagamedesk.h"
#include "QGridLayout"
#include "QTimer"
#include "ctime"
#include "cstdlib"
#include "QMessageBox"
#include "seaboard.h"

SeaGameDesk::SeaGameDesk(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SeaGameDesk)
{
    ui->setupUi(this);
    QMainWindow::setWindowTitle("SeaBattle");

    srand(time(0));

    //here I am initializing boards of user and computer.
    //For user it will be read from file.
    try {
        boardPlayer = new SeaBoard(getFromFile("p1.dat"));
    } catch (QString e) {
        QMessageBox::critical(this, "", e);
    }

    //for computer it will be generated.
    boardComputer = new SeaBoard(20);

    //When the turn is odd number, user will be active.
    //but when it is even, computer will be active.
    turn = 1;


    //Grid for player ships
    QGridLayout *gridLayoutPlayer = new QGridLayout(ui->playerBoard);
    gridLayoutPlayer->setSpacing(3);
    gridLayoutPlayer->setHorizontalSpacing(3);

    for(int r = 0; r < SeaBoard::size; r++) {
        for(int c = 0; c < SeaBoard::size; c++) {
            QPushButton *button = new QPushButton();
            button->setFixedSize(32, 32);
            button->setStyleSheet("background-color: #80aaff; border: 1px solid gray;");


            gridPlayer[r][c] = button;
            gridLayoutPlayer->addWidget(button, r, c);
        }
    }


    //Grid for computers ships
    QGridLayout *gridLayoutComputer = new QGridLayout(ui->ComputerBoard);
    gridLayoutComputer->setSpacing(3);
    gridLayoutComputer->setHorizontalSpacing(3);

    for(int r = 0; r < SeaBoard::size; r++) {
        for(int c = 0; c < SeaBoard::size; c++) {
            QPushButton *button = new QPushButton();
            button->setFixedSize(32, 32);
            button->setStyleSheet("background-color: lightblue; border: 1px solid gray;");

            connect(button, &QPushButton::clicked, this, [this, r, c]() {
                onPlayerClicked(r, c);
            });

            gridComputer[r][c] = button;
            gridLayoutComputer->addWidget(button, r, c);
        }
    }
}


//this is slot for Computer's board, because player will click them.
void SeaGameDesk::onPlayerClicked(int r, int c) {
    //when it is computer's turn, user can't press them.
    if (turn%2 == 0) {
        return;
    }

    //this will check if you have hit the ship.
    bool isHit = boardComputer->getCell(r, c) == 1;

    //when user press any button, the (r,c) cell in board will change to 2,
    //to make it hit, so user won't click the same cell twice.
    boardComputer->setCell(2, r, c);

    //if user finds the ship, user will have another chance to select a cell.
    if(isHit) {
        updateButtonSuccess(r, c, 2);
        int currentScore = ui->playerScore->value();
        ui->playerScore->display(currentScore + 1);
    } else {
        //but if user misses, QTimer will run onComputerClicked.
        updateButtonFail(r, c, 2);
        turn++;
        QTimer::singleShot(1000, this, &SeaGameDesk::onComputerClicked);
    }

    //At the end of each click, the current boards will be checked.
    checkWin();
}


void SeaGameDesk::onComputerClicked() {
    int r, c;

    //this will generate a pair of numbers that gives unclicked button's position.
    do {
        r = rand()%10;
        c = rand()%10;
    } while (boardPlayer->getCell(r, c) == 2);

    bool isHit = boardPlayer->getCell(r,c) == 1;
    boardPlayer->setCell(2,r, c);

    //the same rule. If computer hits a ship, it will run onComputerClicked once again.
    if(isHit) {
        updateButtonSuccess(r, c, 1);
        int currentScore = ui->computerScore->value();
        ui->computerScore->display(currentScore + 1);
        QTimer::singleShot(1000, this, &SeaGameDesk::onComputerClicked);
    } else {
        updateButtonFail(r, c, 1);
        turn++;
    }

    checkWin();
}


//THese are for updating the buttons' color based on state.
void SeaGameDesk::updateButtonSuccess(int r, int c, int board) {
    if (board == 2) {
        gridComputer[r][c]->setStyleSheet("background-color: red; border: 1px solid gray;");
    } else {
        gridPlayer[r][c]->setStyleSheet("background-color: blue; border: 1px solid gray;");
    }
}

void SeaGameDesk::updateButtonFail(int r, int c, int board) {
    if (board == 2) {
        gridComputer[r][c]->setStyleSheet("background-color: white; border: 1px solid white;");
    } else {
        gridPlayer[r][c]->setStyleSheet("background-color: white; border: 1px solid white;");
    }
}


//this will check based on scores. If someone reaches 20, the game will stop.
void SeaGameDesk::checkWin() {
    int playerScore = ui->playerScore->value();
    int computerScore = ui->computerScore->value();


    if (playerScore == 20) {
        QMessageBox::information(this, "", "Congratulations, You Won!");
        QApplication::quit();
    } else if (computerScore == 20) {
        QMessageBox::information(this, "", "You Lost! Computer Won!");
        QApplication::quit();
    }
}

SeaGameDesk::~SeaGameDesk()
{
    delete ui;
}
