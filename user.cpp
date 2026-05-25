#include "user.h"
#include "ui_user.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>

User::User(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::User)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
}

void User::on_pushButton_clicked(){
    if(ui->lineEdit->text().length() >= 3){
        QMessageBox::information(this, "Success", QString("Welcome to GAMEBOX,  %1").arg(ui->lineEdit->text()));

        //start file to store the current nickname
        QString nickname = ui->lineEdit->text().trimmed();
        QFile file("nickname.txt");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)){
            return;
        }
        QTextStream out(&file);
        out << nickname;
        file.close();
        //end

        MainWindow* a = new MainWindow(); // Create the menu
        a->show();
        this->hide(); // hide current window
    }else{
        QMessageBox::information(this, "Invalid username", "Write at least 3 characters.");
    }
}

void User::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton answer = QMessageBox::question(this,"","Are you sure you want to go out?",
                                                               QMessageBox:: No | QMessageBox:: Yes);

    if(answer == QMessageBox::Yes){
        QApplication::quit(); // quit application
    }
}

User::~User()
{
    delete ui;
}
