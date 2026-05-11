#include "seabattlewindow.h"
#include "./ui_seabattlewindow.h"

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
