#include "seashipselectingwindow.h"
#include "ui_shipselectingwindow.h"
#include "mainwindow.h"
#include "QVBoxLayout"
#include "QGridLayout"
#include "QHBoxLayout"
#include "QPushButton"
#include "QMessageBox"
#include "QLabel"
#include "seagamedesk.h"

SeaShipSelectingWindow::SeaShipSelectingWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ShipSelectingWindow)
{
    ui->setupUi(this);

    //A labal for available ship count
    ui->shipCount->display(20);


    //Grid for ships
    QGridLayout *gridLayout = new QGridLayout(ui->gridContainer);
    gridLayout->setSpacing(3);
    gridLayout->setHorizontalSpacing(3);

    for(int r = 0; r < SeaBoard::size; r++) {
        for(int c = 0; c < SeaBoard::size; c++) {
            QPushButton *button = new QPushButton();
            button->setFixedSize(45, 45);
            button->setStyleSheet("background-color: #80aaff; border: 1px solid gray;");

            connect(button, &QPushButton::clicked, this, [this, r, c]() {
                onCellClicked(r, c);
            });

            grid[r][c] = button;
            gridLayout->addWidget(button, r, c);
        }
    }
}

//So when user click any button in board, first the value will be checked.
void SeaShipSelectingWindow::onCellClicked(int r, int c) {
    int limit = ui->shipCount->value();
    int current = board.getCell(r, c);
    //If user have ships to use you can, do some changes.
    //or if you want to redo the action you can press the button too.
    if(limit > 0 || current == 1) {
        //So based on what cell user clicked, it will determine what to do
        board.setCell(current == 0 ? 1 : 0, r, c);
        updateButton(r, c);
        limit = current == 0 ? limit - 1: limit + 1;
        ui->shipCount->display(QString::number(limit));
    } else {
        //if user is out of ships, this will appear.
        QMessageBox::warning(this,"", "You have used all your ships.");
    }
}

//this is for updating the button color, based on your action.
void SeaShipSelectingWindow::updateButton(int r, int c) {
    if (board.getCell(r, c) ==1) {
        grid[r][c]->setStyleSheet("background-color: black; border: 1px solid gray;");
    } else {
        grid[r][c]->setStyleSheet("background-color: #80aaff; border: 1px solid gray;");
    }
}

//this will save you board to binary data. and opens the game window.
void SeaShipSelectingWindow::on_save_clicked() {
    int limit = ui->shipCount->value();
    if(limit > 0) {
        QMessageBox::information(this,"", "You still have "+ QString::number(limit) +" ships to use.");
    } else {
        try {
            board.saveToFile(fileName);
            QMessageBox::information(this, "Success", "Board is successfully saved");
            SeaShipSelectingWindow::hide();
            SeaGameDesk *gameDesk = new SeaGameDesk(this);
            gameDesk->show();
        } catch(QString e) {
            QMessageBox::critical(this, "", e);
        }
    }
}

//this will reset limits, and clears the board.
void SeaShipSelectingWindow::on_reset_clicked() {
    board.resetCell();
    for(int r = 0; r < SeaBoard::size; r++) {
        for (int c = 0; c < SeaBoard::size; c++) {
            updateButton(r, c);
        }
    }
    ui->shipCount->display(20);
}

void SeaShipSelectingWindow::on_back_clicked(){
    SeaShipSelectingWindow::hide();
    MainWindow *gameDesk = new MainWindow(this);
    gameDesk->show();
}

//this will help user to quickly build his board
void SeaShipSelectingWindow::on_random_clicked() {
    //first we have to clear the board.
    on_reset_clicked();
    //then this will places 20 ships
    for(int i = 0; i < 20;) {
        //I am using %10, because it will always gives me number between 0 and 9.
        int r = rand()%10;
        int c = rand()%10;
        //If the cell is empty, it will place a ship.
        //otherwise i won't iterate, and it will again generate new r and c.
        if (board.getCell(r, c) == 0) {
            board.setCell(1, r, c);
            updateButton(r, c);
            i++;
        }
    }
    //At the end the ship count will be zero.
    ui->shipCount->display(0);
}

SeaShipSelectingWindow::~SeaShipSelectingWindow()
{
    delete ui;
}
