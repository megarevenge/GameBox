#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "minewindow.h"
#include "seashipselectingwindow.h"
#include "wordliwindow.h"
#include "tictactoe.h"
#include "sudokuwindow.h"
#include "rankwindow.h"
#include "four_in_rowwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SeaBattle_clicked(){
    SeaShipSelectingWindow* a = new SeaShipSelectingWindow(); // Create the menu
    a->fileName = "p1.dat";
    a->setWindowTitle("Sea Battle");
    a->show();
    this->hide(); // hide current window
}

void MainWindow::on_MineSweeper_clicked(){
    MineWindow* a = new MineWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

void MainWindow::on_Wordle_clicked(){
    WordliWindow* a = new WordliWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

void MainWindow::on_TicTacToe_clicked(){
    TicTacToe* a = new TicTacToe(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

void MainWindow::on_Sudoku_clicked(){
    SudokuWindow* a = new SudokuWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

void MainWindow::on_FourInRow_clicked(){
    Four_In_RowWindow* a = new Four_In_RowWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

void MainWindow::on_Rank_clicked(){
    RankWindow* a = new RankWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

// handling the quit button
void MainWindow::on_quit_clicked()
{
    QMessageBox::StandardButton answer = QMessageBox::question(this,"","Are you sure you want to go out?",
                                                               QMessageBox:: No | QMessageBox:: Yes);

    if(answer == QMessageBox::Yes){
        QApplication::quit(); // quit application
    }
}

