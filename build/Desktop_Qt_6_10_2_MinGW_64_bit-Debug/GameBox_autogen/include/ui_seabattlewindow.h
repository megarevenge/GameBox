/********************************************************************************
** Form generated from reading UI file 'seabattlewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEABATTLEWINDOW_H
#define UI_SEABATTLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeaBattleWindow
{
public:
    QWidget *centralwidget;
    QPushButton *p1;
    QPushButton *p2;
    QPushButton *start;

    void setupUi(QMainWindow *SeaBattleWindow)
    {
        if (SeaBattleWindow->objectName().isEmpty())
            SeaBattleWindow->setObjectName("SeaBattleWindow");
        SeaBattleWindow->resize(550, 400);
        centralwidget = new QWidget(SeaBattleWindow);
        centralwidget->setObjectName("centralwidget");
        p1 = new QPushButton(centralwidget);
        p1->setObjectName("p1");
        p1->setGeometry(QRect(30, 80, 201, 111));
        QFont font;
        font.setPointSize(48);
        p1->setFont(font);
        p2 = new QPushButton(centralwidget);
        p2->setObjectName("p2");
        p2->setGeometry(QRect(320, 80, 201, 111));
        p2->setFont(font);
        start = new QPushButton(centralwidget);
        start->setObjectName("start");
        start->setGeometry(QRect(150, 250, 261, 121));
        QFont font1;
        font1.setPointSize(72);
        start->setFont(font1);
        SeaBattleWindow->setCentralWidget(centralwidget);

        retranslateUi(SeaBattleWindow);

        QMetaObject::connectSlotsByName(SeaBattleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SeaBattleWindow)
    {
        SeaBattleWindow->setWindowTitle(QCoreApplication::translate("SeaBattleWindow", "SeaBattleWindow", nullptr));
        p1->setText(QCoreApplication::translate("SeaBattleWindow", "P1", nullptr));
        p2->setText(QCoreApplication::translate("SeaBattleWindow", "P2", nullptr));
        start->setText(QCoreApplication::translate("SeaBattleWindow", "START", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeaBattleWindow: public Ui_SeaBattleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEABATTLEWINDOW_H
