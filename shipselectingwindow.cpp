#include "shipselectingwindow.h"
#include "ui_shipselectingwindow.h"
#include "fstream"
#include "QVBoxLayout"
#include "QGridLayout"
#include "QPushButton"
#include "QMessageBox"
#include "QLabel"

ShipSelectingWindow::ShipSelectingWindow(QWidget *parent, fstream &file)
    : QMainWindow(parent)
    , ui(new Ui::ShipSelectingWindow)
{
    this->file = file;
    ui->setupUi(this);

    QVBoxLayout* mainLayout = new QVBoxLayout();


    // //A labal for available ship count
    // QLabel shipCount = new QLabel(this);
    // shipCount->setText("20");


    //Grid for ships
    QGridLayout *gridLayout = new QGridLayout();
    gridLayout->setSpacing(2);

    for(int r = 0; r < Board::size; r++) {
        for(int c = 0; c < Board::size; c++) {
            QPushButton *button = new QPushButton();
            button->setFixedSize(25, 25);
            button->setStyleSheet("background-color: lightblue; border: 1px solid gray;");

            connect(button, &QPushButton::clicked, this, [this, r, c]() {
                onCellClicked(r, c);
            });

            grid[r][c] = button;
            gridLayout->addWidget(button);
        }
    }

    QPushButton *saveButton = new QPushButton();
    saveButton->setFixedHeight(40);
    connect(saveButton, &QPushButton::clicked, this, &ShipSelectingWindow::on_save_clicked);

    mainLayout->addLayout(gridLayout);
    mainLayout->addWidget(saveButton);

    setLayout(mainLayout);
    setWindowTitle("Place Your Ships");
}

void ShipSelectingWindow::onCellClicked(int r, int c) {
    int current = board.getCell(r, c);
    board.setCell(current == 0 ? 1 : 0, r, c);
    updateButton(r, c);
}

void ShipSelectingWindow::updateButton(int r, int c) {
    if (board.getCell(r, c) ==1) {
        grid[r][c]->setStyleSheet("background-color: black; border: 1px solid gray;");
    } else {
        grid[r][c]->setStyleSheet("background-color: lightblue; border: 1px solid gray;");
    }
}

ShipSelectingWindow::~ShipSelectingWindow()
{
    delete ui;
}
