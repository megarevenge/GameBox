/********************************************************************************
** Form generated from reading UI file 'sudokuwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKUWINDOW_H
#define UI_SUDOKUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SudokuWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QSpacerItem *rightSpacer;
    QSpacerItem *midSpacer;
    QSpacerItem *leftSpacer;
    QSpacerItem *topSpacer;
    QSpacerItem *bottomSpacer;
    QWidget *boardWidget;
    QHBoxLayout *buttonRow;
    QSpacerItem *btnSpacer;
    QPushButton *resetButton;
    QPushButton *backButton;
    QVBoxLayout *rightPanelLayout;
    QLabel *remainingTitle;
    QWidget *leftWidget;
    QLabel *timerLabel;
    QLabel *scoreLabel;
    QSpacerItem *rightBottomSpacer;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SudokuWindow)
    {
        if (SudokuWindow->objectName().isEmpty())
            SudokuWindow->setObjectName("SudokuWindow");
        SudokuWindow->resize(900, 682);
        SudokuWindow->setStyleSheet(QString::fromUtf8("QMainWindow { background-color: #e6eeff; }"));
        centralwidget = new QWidget(SudokuWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        rightSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(rightSpacer, 2, 5, 3, 1);

        midSpacer = new QSpacerItem(18, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(midSpacer, 2, 3, 2, 1);

        leftSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(leftSpacer, 2, 1, 3, 1);

        topSpacer = new QSpacerItem(20, 60, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_4->addItem(topSpacer, 0, 1, 1, 5);

        bottomSpacer = new QSpacerItem(20, 60, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_4->addItem(bottomSpacer, 5, 1, 1, 5);

        boardWidget = new QWidget(centralwidget);
        boardWidget->setObjectName("boardWidget");
        boardWidget->setMinimumSize(QSize(450, 450));

        gridLayout_4->addWidget(boardWidget, 2, 2, 2, 1);

        buttonRow = new QHBoxLayout();
        buttonRow->setSpacing(12);
        buttonRow->setObjectName("buttonRow");
        btnSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonRow->addItem(btnSpacer);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        resetButton->setStyleSheet(QString::fromUtf8("QPushButton{ color:#003cb3; padding:0.6em 1.4em; font-size:16px; border-radius:0.5em; background:#99bbff; border:2px solid #000; }"));

        buttonRow->addWidget(resetButton);

        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{ color:#004de6; padding:0.6em 1.4em; font-size:16px; border-radius:0.5em; background:#ccddff; border:2px solid #000; }"));

        buttonRow->addWidget(backButton);


        gridLayout_4->addLayout(buttonRow, 4, 2, 1, 3);

        rightPanelLayout = new QVBoxLayout();
        rightPanelLayout->setSpacing(10);
        rightPanelLayout->setObjectName("rightPanelLayout");
        remainingTitle = new QLabel(centralwidget);
        remainingTitle->setObjectName("remainingTitle");
        remainingTitle->setStyleSheet(QString::fromUtf8("\n"
"          QLabel { font-size: 14px; font-weight: bold; color: #333; margin-top: 6px; }\n"
"         "));

        rightPanelLayout->addWidget(remainingTitle);

        leftWidget = new QWidget(centralwidget);
        leftWidget->setObjectName("leftWidget");
        leftWidget->setMinimumSize(QSize(180, 260));

        rightPanelLayout->addWidget(leftWidget);

        timerLabel = new QLabel(centralwidget);
        timerLabel->setObjectName("timerLabel");
        timerLabel->setStyleSheet(QString::fromUtf8("\n"
"          QLabel {\n"
"            font-size: 22px;\n"
"            font-weight: bold;\n"
"            color: #003cb3;\n"
"            background: #ddeeff;\n"
"            border: 2px solid #6699ff;\n"
"            border-radius: 6px;\n"
"            padding: 6px 12px;\n"
"          }\n"
"         "));
        timerLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        rightPanelLayout->addWidget(timerLabel);

        scoreLabel = new QLabel(centralwidget);
        scoreLabel->setObjectName("scoreLabel");
        scoreLabel->setStyleSheet(QString::fromUtf8("\n"
"          QLabel {\n"
"            font-size: 22px;\n"
"            font-weight: bold;\n"
"            color: #006600;\n"
"            background: #ddffdd;\n"
"            border: 2px solid #44bb44;\n"
"            border-radius: 6px;\n"
"            padding: 6px 12px;\n"
"          }\n"
"         "));
        scoreLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        rightPanelLayout->addWidget(scoreLabel);

        rightBottomSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        rightPanelLayout->addItem(rightBottomSpacer);


        gridLayout_4->addLayout(rightPanelLayout, 2, 4, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(10, 10));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: #e6eeff; }"));

        gridLayout_4->addWidget(pushButton, 1, 1, 1, 1);

        SudokuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SudokuWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 30));
        SudokuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SudokuWindow);
        statusbar->setObjectName("statusbar");
        SudokuWindow->setStatusBar(statusbar);

        retranslateUi(SudokuWindow);

        QMetaObject::connectSlotsByName(SudokuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SudokuWindow)
    {
        SudokuWindow->setWindowTitle(QCoreApplication::translate("SudokuWindow", "Sudoku", nullptr));
        resetButton->setText(QCoreApplication::translate("SudokuWindow", "Reset", nullptr));
        backButton->setText(QCoreApplication::translate("SudokuWindow", "Back", nullptr));
        remainingTitle->setText(QCoreApplication::translate("SudokuWindow", "Remaining numbers:", nullptr));
        timerLabel->setText(QCoreApplication::translate("SudokuWindow", "Time: 00:00", nullptr));
        scoreLabel->setText(QCoreApplication::translate("SudokuWindow", "Score: 0", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SudokuWindow: public Ui_SudokuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKUWINDOW_H
