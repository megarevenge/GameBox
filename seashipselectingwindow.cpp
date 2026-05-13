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
    // ui->setupUi(this);

    QVBoxLayout* mainLayout = new QVBoxLayout();


    //A labal for available ship count
    shipCount = new QLabel(this);
    shipCount->setText("20");
    shipCount->setStyleSheet("font-size: 20px;");
    mainLayout->addWidget(shipCount);


    //Grid for ships
    QGridLayout *gridLayout = new QGridLayout();
    gridLayout->setSpacing(2);

    for(int r = 0; r < SeaBoard::size; r++) {
        for(int c = 0; c < SeaBoard::size; c++) {
            QPushButton *button = new QPushButton();
            button->setFixedSize(25, 25);
            button->setStyleSheet("background-color: lightblue; border: 1px solid gray;");

            connect(button, &QPushButton::clicked, this, [this, r, c]() {
                onCellClicked(r, c);
            });

            grid[r][c] = button;
            gridLayout->addWidget(button, r, c);
        }
    }

    QPushButton *saveButton = new QPushButton("Save");
    saveButton->setFixedHeight(40);
    connect(saveButton, &QPushButton::clicked, this, &SeaShipSelectingWindow::on_save_clicked);

    QPushButton *resetButton = new QPushButton("Reset");
    resetButton->setFixedHeight(40);
    connect(resetButton, &QPushButton::clicked, this, &SeaShipSelectingWindow::on_reset_clicked);

    QHBoxLayout *layoutButtons = new QHBoxLayout();

    layoutButtons->addWidget(saveButton);
    layoutButtons->addWidget(resetButton);


    mainLayout->addLayout(gridLayout);
    mainLayout->addLayout(layoutButtons);


    QWidget* centralWidget = new QWidget(this);
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
}

void SeaShipSelectingWindow::onCellClicked(int r, int c) {
    int limit = shipCount->text().toInt();
    if(limit > 0) {
        int current = board.getCell(r, c);
        board.setCell(current == 0 ? 1 : 0, r, c);
        updateButton(r, c);
        limit = current == 0 ? limit - 1: limit + 1;
        shipCount->setText(QString::number(limit));
    } else {
        QMessageBox::warning(this,"Number of Ships", "You have used all your ships.");
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
    int limit = shipCount->text().toInt();
    if(limit > 0) {
        QMessageBox::information(this,"Number of Ships", "You still have ships to use.");
    } else {
        try {
            board.saveToFile(fileName);
            QMessageBox::information(this, "Success", "The Board is succesfully saved, your partners turn");
            SeaShipSelectingWindow::hide();
        } catch(QString e) {
            QMessageBox::critical(this, "File error", "Couldn't save the board to file");
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
    shipCount->setText("20");
}

SeaShipSelectingWindow::~SeaShipSelectingWindow()
{
    delete ui;
}
