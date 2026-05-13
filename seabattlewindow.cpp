#include "seabattlewindow.h"
#include "./ui_seabattlewindow.h"
#include "seashipselectingwindow.h"

SeaBattleWindow::SeaBattleWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SeaBattleWindow)
{
    ui->setupUi(this);
}

SeaBattleWindow::~SeaBattleWindow()
{
    delete ui;
}


void SeaBattleWindow::on_p1_clicked() {
    SeaShipSelectingWindow *p1 = new SeaShipSelectingWindow(this);
    p1->fileName = "p1.dat";
    p1->setWindowTitle("P1");
    p1->show();
}

void SeaBattleWindow::on_p2_clicked() {
    SeaShipSelectingWindow *p2 = new SeaShipSelectingWindow(this);
    p2->fileName = "p2.dat";
    p2->setWindowTitle("P2");
    p2->show();
}

void SeaBattleWindow::on_start_clicked() {

}