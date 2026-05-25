/********************************************************************************
** Form generated from reading UI file 'seagamedesk.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEAGAMEDESK_H
#define UI_SEAGAMEDESK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeaGameDesk
{
public:
    QWidget *centralwidget;
    QWidget *playerBoard;
    QWidget *ComputerBoard;
    QLabel *you;
    QLabel *computer;
    QLCDNumber *playerScore;
    QLCDNumber *computerScore;
    QFrame *line;

    void setupUi(QMainWindow *SeaGameDesk)
    {
        if (SeaGameDesk->objectName().isEmpty())
            SeaGameDesk->setObjectName("SeaGameDesk");
        SeaGameDesk->resize(800, 600);
        SeaGameDesk->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 238, 255)"));
        centralwidget = new QWidget(SeaGameDesk);
        centralwidget->setObjectName("centralwidget");
        playerBoard = new QWidget(centralwidget);
        playerBoard->setObjectName("playerBoard");
        playerBoard->setGeometry(QRect(30, 90, 350, 350));
        ComputerBoard = new QWidget(centralwidget);
        ComputerBoard->setObjectName("ComputerBoard");
        ComputerBoard->setGeometry(QRect(420, 90, 350, 350));
        you = new QLabel(centralwidget);
        you->setObjectName("you");
        you->setGeometry(QRect(110, 450, 191, 51));
        QFont font;
        font.setPointSize(30);
        you->setFont(font);
        you->setStyleSheet(QString::fromUtf8("color: #0015ff"));
        you->setFrameShape(QFrame::Shape::Box);
        you->setFrameShadow(QFrame::Shadow::Plain);
        you->setLineWidth(2);
        you->setAlignment(Qt::AlignmentFlag::AlignCenter);
        computer = new QLabel(centralwidget);
        computer->setObjectName("computer");
        computer->setGeometry(QRect(500, 450, 191, 51));
        computer->setFont(font);
        computer->setStyleSheet(QString::fromUtf8("color:red"));
        computer->setFrameShape(QFrame::Shape::Box);
        computer->setLineWidth(2);
        computer->setAlignment(Qt::AlignmentFlag::AlignCenter);
        playerScore = new QLCDNumber(centralwidget);
        playerScore->setObjectName("playerScore");
        playerScore->setGeometry(QRect(330, 20, 61, 51));
        playerScore->setStyleSheet(QString::fromUtf8("color: #0055ff"));
        playerScore->setDigitCount(2);
        computerScore = new QLCDNumber(centralwidget);
        computerScore->setObjectName("computerScore");
        computerScore->setGeometry(QRect(410, 20, 61, 51));
        computerScore->setStyleSheet(QString::fromUtf8("color: red"));
        computerScore->setDigitCount(2);
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(400, 10, 3, 70));
        line->setStyleSheet(QString::fromUtf8("color: #001133"));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        SeaGameDesk->setCentralWidget(centralwidget);

        retranslateUi(SeaGameDesk);

        QMetaObject::connectSlotsByName(SeaGameDesk);
    } // setupUi

    void retranslateUi(QMainWindow *SeaGameDesk)
    {
        SeaGameDesk->setWindowTitle(QCoreApplication::translate("SeaGameDesk", "MainWindow", nullptr));
        you->setText(QCoreApplication::translate("SeaGameDesk", "You", nullptr));
        computer->setText(QCoreApplication::translate("SeaGameDesk", "Computer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeaGameDesk: public Ui_SeaGameDesk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEAGAMEDESK_H
