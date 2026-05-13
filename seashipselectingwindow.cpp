#include "seashipselectingwindow.h"
#include "ui_shipselectingwindow.h"
#include "fstream"
#include "QVBoxLayout"
#include "QGridLayout"
#include "QHBoxLayout"
#include "QPushButton"
#include "QMessageBox"
#include "QLabel"

SeaShipSelectingWindow::SeaShipSelectingWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ShipSelectingWindow)
{
    ui->setupUi(this);


    //A labal for available ship count
    ui->shipCount->display(15);


    //Grid for ships
    QGridLayout *gridLayout = new QGridLayout(ui->gridContainer);
    gridLayout->setSpacing(3);
    gridLayout->setHorizontalSpacing(3);

    for(int r = 0; r < SeaBoard::size; r++) {
        for(int c = 0; c < SeaBoard::size; c++) {
            QPushButton *button = new QPushButton();
            button->setFixedSize(45, 45);
            button->setStyleSheet("background-color: lightblue; border: 1px solid gray;");

            connect(button, &QPushButton::clicked, this, [this, r, c]() {
                onCellClicked(r, c);
            });

            grid[r][c] = button;
            gridLayout->addWidget(button, r, c);
        }
    }
}

void SeaShipSelectingWindow::onCellClicked(int r, int c) {
    int limit = ui->shipCount->value();
    int current = board.getCell(r, c);
    if(limit > 0 || current == 1) {
        board.setCell(current == 0 ? 1 : 0, r, c);
        updateButton(r, c);
        limit = current == 0 ? limit - 1: limit + 1;
        ui->shipCount->display(QString::number(limit));
    } else {
        QMessageBox::warning(this,"", "You have used all your ships.");
    }
}

void SeaShipSelectingWindow::updateButton(int r, int c) {
    if (board.getCell(r, c) ==1) {
        grid[r][c]->setStyleSheet("background-color: black; border: 1px solid gray;");
    } else {
        grid[r][c]->setStyleSheet("background-color: lightblue; border: 1px solid gray;");
    }
}

void SeaShipSelectingWindow::on_save_clicked() {
    int limit = ui->shipCount->value();
    if(limit > 0) {
        QMessageBox::information(this,"", "You still have "+ QString::number(limit) +" ships to use.");
    } else {
        try {
            board.saveToFile(fileName);
            QMessageBox::information(this, "Success", "The Board is succesfully saved, your partners turn");
            SeaShipSelectingWindow::hide();
        } catch(QString e) {
            QMessageBox::critical(this, "", "Couldn't save the board to file");
        }
    }
}

void SeaShipSelectingWindow::on_reset_clicked() {
    board.resetCell();
    for(int r = 0; r < SeaBoard::size; r++) {
        for (int c = 0; c < SeaBoard::size; c++) {
            updateButton(r, c);
        }
    }
    ui->shipCount->display(15);
}

SeaShipSelectingWindow::~SeaShipSelectingWindow()
{
    delete ui;
}
