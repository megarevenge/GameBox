/********************************************************************************
** Form generated from reading UI file 'shipselectingwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIPSELECTINGWINDOW_H
#define UI_SHIPSELECTINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShipSelectingWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ShipSelectingWindow)
    {
        if (ShipSelectingWindow->objectName().isEmpty())
            ShipSelectingWindow->setObjectName("ShipSelectingWindow");
        ShipSelectingWindow->resize(400, 500);
        centralwidget = new QWidget(ShipSelectingWindow);
        centralwidget->setObjectName("centralwidget");
        ShipSelectingWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShipSelectingWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 21));
        ShipSelectingWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ShipSelectingWindow);
        statusbar->setObjectName("statusbar");
        ShipSelectingWindow->setStatusBar(statusbar);

        retranslateUi(ShipSelectingWindow);

        QMetaObject::connectSlotsByName(ShipSelectingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShipSelectingWindow)
    {
        ShipSelectingWindow->setWindowTitle(QCoreApplication::translate("ShipSelectingWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShipSelectingWindow: public Ui_ShipSelectingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIPSELECTINGWINDOW_H
