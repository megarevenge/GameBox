/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *MineSweeper;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *quit;
    QSpacerItem *verticalSpacer_3;
    QPushButton *TicTacToe;
    QPushButton *FourInRow;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Wordle;
    QPushButton *Sudoku;
    QPushButton *Rank;
    QPushButton *SeaBattle;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow { \n"
"	background-color: #e6eeff; \n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        MineSweeper = new QPushButton(centralwidget);
        MineSweeper->setObjectName("MineSweeper");
        MineSweeper->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #99bbff;\n"
"  margin-bottom: 10px;\n"
"}"));

        gridLayout->addWidget(MineSweeper, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        font.setBold(true);
        font.setItalic(false);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: \"Roboto\", cursive, sans-serif;\n"
"	font-size: 100px;\n"
"	color: #6699ff;\n"
"	font-weight: 700;\n"
"}\n"
""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 3, 1, 1, 2);

        quit = new QPushButton(centralwidget);
        quit->setObjectName("quit");
        quit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #99bbff;\n"
"  margin-bottom: 10px;\n"
"}"));

        gridLayout->addWidget(quit, 7, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 9, 2, 1, 1);

        TicTacToe = new QPushButton(centralwidget);
        TicTacToe->setObjectName("TicTacToe");
        TicTacToe->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #99bbff;\n"
"  margin-bottom: 10px;\n"
"}"));

        gridLayout->addWidget(TicTacToe, 4, 1, 1, 1);

        FourInRow = new QPushButton(centralwidget);
        FourInRow->setObjectName("FourInRow");
        FourInRow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #ccddff;\n"
"  margin-bottom: 10px;\n"
"}"));

        gridLayout->addWidget(FourInRow, 4, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 3, 1, 1);

        Wordle = new QPushButton(centralwidget);
        Wordle->setObjectName("Wordle");
        Wordle->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #ccddff;\n"
"  margin-bottom: 10px;\n"
"}"));

        gridLayout->addWidget(Wordle, 5, 1, 1, 1);

        Sudoku = new QPushButton(centralwidget);
        Sudoku->setObjectName("Sudoku");
        Sudoku->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #99bbff;\n"
"  margin-bottom: 10px;\n"
"}"));

        gridLayout->addWidget(Sudoku, 5, 2, 1, 1);

        Rank = new QPushButton(centralwidget);
        Rank->setObjectName("Rank");
        Rank->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #ccddff;\n"
"  margin-bottom: 10px;\n"
"}"));

        gridLayout->addWidget(Rank, 7, 1, 1, 1);

        SeaBattle = new QPushButton(centralwidget);
        SeaBattle->setObjectName("SeaBattle");
        SeaBattle->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #ccddff;\n"
"  margin-bottom: 10px;\n"
"}"));

        gridLayout->addWidget(SeaBattle, 6, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MineSweeper->setText(QCoreApplication::translate("MainWindow", "Mine Sweeper", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "GAME BOX", nullptr));
        quit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        TicTacToe->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        FourInRow->setText(QCoreApplication::translate("MainWindow", "Four in Row", nullptr));
        Wordle->setText(QCoreApplication::translate("MainWindow", "Wordle", nullptr));
        Sudoku->setText(QCoreApplication::translate("MainWindow", "Sudoku", nullptr));
        Rank->setText(QCoreApplication::translate("MainWindow", "Rank", nullptr));
        SeaBattle->setText(QCoreApplication::translate("MainWindow", "Sea Battle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
