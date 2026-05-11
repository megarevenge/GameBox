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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeaBattleWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SeaBattleWindow)
    {
        if (SeaBattleWindow->objectName().isEmpty())
            SeaBattleWindow->setObjectName("SeaBattleWindow");
        SeaBattleWindow->resize(800, 600);
        centralwidget = new QWidget(SeaBattleWindow);
        centralwidget->setObjectName("centralwidget");
        SeaBattleWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SeaBattleWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        SeaBattleWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SeaBattleWindow);
        statusbar->setObjectName("statusbar");
        SeaBattleWindow->setStatusBar(statusbar);

        retranslateUi(SeaBattleWindow);

        QMetaObject::connectSlotsByName(SeaBattleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SeaBattleWindow)
    {
        SeaBattleWindow->setWindowTitle(QCoreApplication::translate("SeaBattleWindow", "SeaBattleWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeaBattleWindow: public Ui_SeaBattleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEABATTLEWINDOW_H
