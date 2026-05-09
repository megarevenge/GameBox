#include "mainwindow.h"
#include "minebutton.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    QWidget *centralWidget = new QWidget(this); // to center widgets
    QGridLayout *gridLayout = new QGridLayout(centralWidget); // building layout
    gridLayout->setSpacing(0);

    for(int r = 0; r < 10; r++){
        for(int c = 0; c < 10; c++){
            buttons[r][c] = new MineButton(r, c, this);
            buttons[r][c]->setFixedSize(40, 40);

            connect(buttons[r][c], &MineButton::leftClicked, this, &MainWindow::handleLeftClick);


            connect(buttons[r][c], &MineButton::rightClicked, this, &MainWindow::handleRightClick);

            gridLayout->addWidget(buttons[r][c], r, c);
        }
    }

    setCentralWidget(centralWidget);
    setWindowTitle("Qt Minesweeper");
}

void MainWindow::handleLeftClick(int r, int c){

    if(buttons[r][c]->text() != "🚩"){
        buttons[r][c]->setText("");
        buttons[r][c]->setEnabled(false);
    }
}

void MainWindow::handleRightClick(int r, int c){
    if(buttons[r][c]->text() == "🚩"){
        buttons[r][c]->setText("");
    }else{
        buttons[r][c]->setText("🚩");
    }
}

MainWindow::~MainWindow(){}