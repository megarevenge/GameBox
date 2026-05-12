#include "minewindow.h"
#include "minebutton.h"
#include "minegameover.h"
#include <stdlib.h>
#include <cstdlib>
#include <fstream>

using namespace std;

MineWindow::MineWindow(QWidget *parent) : QMainWindow(parent)
{
    QWidget *centralWidget = new QWidget(this); // to center widgets
    QGridLayout *gridLayout = new QGridLayout(centralWidget); // building layout
    gridLayout->setSpacing(0);
    this->setFixedWidth(700);
    this->setFixedHeight(600);

    for(int r = 0; r < 10; r++){
        for(int c = 0; c < 10; c++){
            buttons[r][c] = new MineButton(r, c, this);
            buttons[r][c]->setFixedSize(65, 65);
            //buttons[r][c]->setStyleSheet("background-color: lightblue;");

            connect(buttons[r][c], &MineButton::leftClicked, this, &MineWindow::handleLeftClick);

            connect(buttons[r][c], &MineButton::rightClicked, this, &MineWindow::handleRightClick);

            gridLayout->addWidget(buttons[r][c], r, c);
        }
    }

    placeMines();
    calculateNumbers();

    // time start
    secondsElapsed = 0;
    gameStarted = false;

    gameTimer = new QTimer(this);
    connect(gameTimer, &QTimer::timeout, this, &MineWindow::updateTimer);

    timeLabel = new QLabel("Time: 0", this);
    // time end

    setCentralWidget(centralWidget);
    setWindowTitle("Qt Minesweeper");
}

void MineWindow::updateTimer(){
    secondsElapsed++;
    timeLabel->setText("Time: " + QString::number(secondsElapsed));
}

void MineWindow::handleLeftClick(int r, int c){
    if (!gameStarted) {
        gameTimer->start(1000);
        gameStarted = true;
    }

    if(buttons[r][c]->text() != "🚩" && buttons[r][c]->isEnabled()){
        if(hasMines[r][c]){
            buttons[r][c]->setEnabled(false);
            buttons[r][c]->setText("💣");
            QMessageBox::information(this, "Game over", "Game Over!");
            MineGameOver* a = new MineGameOver(); // Create the menu
            a->show();
            this->hide(); // hide current window
            return;
        }

        if(mineCount[r][c] == 0){
            revealEmpty(r, c);
        } else {
            buttons[r][c]->setEnabled(false);
            QString color;

            switch (mineCount[r][c]) {
            case 1:  color = "blue";   break;
            case 2:  color = "green";  break;
            case 3:  color = "red";    break;
            case 4:  color = "purple"; break;
            default: color = "grey";   break;
            }

            buttons[r][c]->setStyleSheet(QString("color: %1; font-weight: bold; font-size: 18px;").arg(color));
            buttons[r][c]->setText(QString::number(mineCount[r][c]));
        }
    }

    checkWin();
}

 void MineWindow::checkWin() {
    int safeCellsClicked = 0;

    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 10; c++) {
            //If the button is revealed (disabled) and it wasn't a mine
            if (!buttons[r][c]->isEnabled() && !hasMines[r][c]) {
                safeCellsClicked++;
            }
        }
    }

    //On a 10x10 board with 10 mines, you win at 90 safe cells
    if (safeCellsClicked == 90 or buttons[9][9]->text() == "🚩") {
        gameTimer->stop();
        saveRecord(secondsElapsed);  //Save to TXT

        QMessageBox::information(this, "Victory!",
                                  "Congratulations! You cleared the board in " +
                                      QString::number(secondsElapsed) + " seconds.\nYour score has been saved.");
        MineGameOver* menu = new MineGameOver(); // Create the menu
        menu->show();

        this->close(); // Close the game board
    }
}

void MineWindow::saveRecord(int seconds) {
    ofstream outFile("mine_scores.txt", ios::app);

    if(outFile.is_open()){
        outFile << seconds << endl;
        outFile.close();
    }
}

void MineWindow::handleRightClick(int r, int c){
    if(buttons[r][c]->text() == "🚩"){
        buttons[r][c]->setText("");
    }else{
        buttons[r][c]->setText("🚩");
    }
}

void MineWindow::placeMines(){

    for(int r = 0; r < 10; r++){
        for(int c = 0; c < 10; c++){
            hasMines[r][c] = false;
        }
    }

    int minesPlaced = 0;
    while(minesPlaced < 10){
        // using arc4random_uniform because with rand() func the qt shows error
        uint32_t r = arc4random_uniform(10);
        uint32_t c = arc4random_uniform(10);

        if(!hasMines[r][c]){
            hasMines[r][c] = true;
            minesPlaced++;
        }
    }
}

void MineWindow::calculateNumbers(){
    for(int r = 0; r < 10; r++){
        for(int c = 0; c < 10; c++){
            if(hasMines[r][c]){
                mineCount[r][c] = -1;
                continue;
            }
            int pr = r - 1;
            int pc = c - 1;
            int numOfMines = 0;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    int ar = pr + i;
                    int ac = pc + j;
                    if(ar < 0 || ar >= 10 || ac < 0 || ac >= 10){
                        continue;
                    }else if(hasMines[ar][ac]){
                        numOfMines++;
                    }
                }
            }
            mineCount[r][c] = numOfMines;
        }
    }
}

void MineWindow::revealEmpty(int r, int c) {
    if (r < 0 || r >= 10 || c < 0 || c >= 10) return;

    if (!buttons[r][c]->isEnabled() || buttons[r][c]->text() == "🚩") return;

    buttons[r][c]->setEnabled(false);

    int count = mineCount[r][c];

    if (count > 0) {
        // If it's a number, show it with proper styling and STOP recursing
        QString color;
        switch (count) {
        case 1:  color = "blue";   break;
        case 2:  color = "green";  break;
        case 3:  color = "red";    break;
        case 4:  color = "purple"; break;
        default: color = "grey";   break;
        }
        buttons[r][c]->setStyleSheet(QString("color: %1; font-weight: bold; font-size: 18px;").arg(color));
        buttons[r][c]->setText(QString::number(count));
        return;
    }

    // 4. If we are here, it means the cell was 0 (empty)
    buttons[r][c]->setText("");

    // Now recursively reveal all 8 neighbors
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if (i == 0 && j == 0) continue; // Skip the cell itself
            revealEmpty(r + i, c + j);
        }
    }
}








MineWindow::~MineWindow(){}