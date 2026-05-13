#include "seagamedesk.h"
#include "ui_seagamedesk.h"

SeaGameDesk::SeaGameDesk(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SeaGameDesk)
{
    ui->setupUi(this);
}

SeaGameDesk::~SeaGameDesk()
{
    delete ui;
}
