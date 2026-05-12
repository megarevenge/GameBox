#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "minewindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_MineSweeper_clicked(){
    MineWindow* a = new MineWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

void MainWindow::on_quit_clicked()
{
    QMessageBox::StandardButton answer = QMessageBox::question(this,"","Are you sure you want to go out?",
                          QMessageBox:: No | QMessageBox:: Yes);

    if(answer == QMessageBox::Yes){
        QApplication::quit();
    }
}

