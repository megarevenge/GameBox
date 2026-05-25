#include "minegameover.h"
#include "minewindow.h"
#include "mainwindow.h"
#include "ui_minegameover.h"
#include <fstream>
#include <vector>

using namespace std;

MineGameOver::MineGameOver(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MineGameOver)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    displayRecords();
}

// displays records including the best and previous records
void MineGameOver::displayRecords(){
    ifstream inFile("mine_scores.txt");
    int time;
    vector<int> numbers;
    int lastResult = -1;

    if(inFile.is_open()){
        while(inFile >> time){
            lastResult = time;
            numbers.push_back(time);
        }
    }
    inFile.close();

    if(numbers.empty()){
        ui->label_2->setText("No records available yet!");
        return;
    }

    int bestTime = *min_element(numbers.begin(), numbers.end());

    ui->label_2->setText("Best Time: " + QString::number(bestTime) + " seconds");
    if(lastResult != -1){
        ui->label_3->setText("Previous result: " + QString::number(lastResult) + " seconds");
    }
}

// start the game again
void MineGameOver::on_pushButton_clicked(){
    MineWindow* a = new MineWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

// back to menu button
void MineGameOver::on_pushButton_2_clicked(){
    MainWindow* a = new MainWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

MineGameOver::~MineGameOver()
{
    delete ui;
}
