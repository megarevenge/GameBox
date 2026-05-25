/********************************************************************************
** Form generated from reading UI file 'four_in_rowwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOUR_IN_ROWWINDOW_H
#define UI_FOUR_IN_ROWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Four_In_RowWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *headerLayout;
    QPushButton *backButton;
    QSpacerItem *spacerLeft;
    QLabel *titleLabel;
    QSpacerItem *spacerRight;
    QLabel *fake_label;
    QWidget *ballContainer;
    QWidget *ballArea;
    QPushButton *ballButton;
    QHBoxLayout *gameCenterLayout;
    QSpacerItem *leftGameSpacer;
    QWidget *gameWidget;
    QGridLayout *gridLayout;
    QLabel *cell_0_0;
    QLabel *cell_0_1;
    QLabel *cell_0_2;
    QLabel *cell_0_3;
    QLabel *cell_0_4;
    QLabel *cell_0_5;
    QLabel *cell_0_6;
    QLabel *cell_1_0;
    QLabel *cell_1_1;
    QLabel *cell_1_2;
    QLabel *cell_1_3;
    QLabel *cell_1_4;
    QLabel *cell_1_5;
    QLabel *cell_1_6;
    QLabel *cell_2_0;
    QLabel *cell_2_1;
    QLabel *cell_2_2;
    QLabel *cell_2_3;
    QLabel *cell_2_4;
    QLabel *cell_2_5;
    QLabel *cell_2_6;
    QLabel *cell_3_0;
    QLabel *cell_3_1;
    QLabel *cell_3_2;
    QLabel *cell_3_3;
    QLabel *cell_3_4;
    QLabel *cell_3_5;
    QLabel *cell_3_6;
    QLabel *cell_4_0;
    QLabel *cell_4_1;
    QLabel *cell_4_2;
    QLabel *cell_4_3;
    QLabel *cell_4_4;
    QLabel *cell_4_5;
    QLabel *cell_4_6;
    QLabel *cell_5_0;
    QLabel *cell_5_1;
    QLabel *cell_5_2;
    QLabel *cell_5_3;
    QLabel *cell_5_4;
    QLabel *cell_5_5;
    QLabel *cell_5_6;
    QSpacerItem *rightGameSpacer;

    void setupUi(QMainWindow *Four_In_RowWindow)
    {
        if (Four_In_RowWindow->objectName().isEmpty())
            Four_In_RowWindow->setObjectName("Four_In_RowWindow");
        Four_In_RowWindow->resize(800, 600);
        Four_In_RowWindow->setStyleSheet(QString::fromUtf8("background-color: #e6eeff;\n"
"color: black;"));
        centralwidget = new QWidget(Four_In_RowWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(35, 15, 35, 30);
        headerLayout = new QHBoxLayout();
        headerLayout->setObjectName("headerLayout");
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{ color:#004de6; padding:0.6em 1.4em; font-size:16px; border-radius:0.5em; background:#ccddff; border:2px solid #000; }\n"
"         "));

        headerLayout->addWidget(backButton);

        spacerLeft = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout->addItem(spacerLeft);

        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("\n"
"          QLabel {\n"
"           font-size: 38px;\n"
"           font-weight: bold;\n"
"           color: #2b78e4;\n"
"           letter-spacing: 1px;\n"
"          }\n"
"         "));

        headerLayout->addWidget(titleLabel);

        spacerRight = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout->addItem(spacerRight);

        fake_label = new QLabel(centralwidget);
        fake_label->setObjectName("fake_label");
        fake_label->setStyleSheet(QString::fromUtf8("\n"
"          QLabel {\n"
"           min-width: 48px;\n"
"           max-width: 48px;\n"
"           min-height: 48px;\n"
"           max-height: 48px;\n"
"          }\n"
"         "));

        headerLayout->addWidget(fake_label);


        verticalLayout->addLayout(headerLayout);

        ballContainer = new QWidget(centralwidget);
        ballContainer->setObjectName("ballContainer");
        ballContainer->setMinimumSize(QSize(730, 60));
        ballArea = new QWidget(ballContainer);
        ballArea->setObjectName("ballArea");
        ballArea->setGeometry(QRect(150, 10, 431, 50));
        ballButton = new QPushButton(ballArea);
        ballButton->setObjectName("ballButton");
        ballButton->setGeometry(QRect(0, 0, 48, 48));
        ballButton->setStyleSheet(QString::fromUtf8("\n"
"          QPushButton {\n"
"           background-color: #e63946;\n"
"           border: 2px solid #b91d1d;\n"
"           border-radius: 24px;\n"
"          }\n"
"          QPushButton:pressed {\n"
"           background-color: #cf2e3a;\n"
"           border: 2px solid #b91d1d;\n"
"           border-radius: 24px;\n"
"          }\n"
"          QPushButton:focus {\n"
"           outline: none;\n"
"          }\n"
"         "));

        verticalLayout->addWidget(ballContainer);

        gameCenterLayout = new QHBoxLayout();
        gameCenterLayout->setObjectName("gameCenterLayout");
        leftGameSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gameCenterLayout->addItem(leftGameSpacer);

        gameWidget = new QWidget(centralwidget);
        gameWidget->setObjectName("gameWidget");
        gameWidget->setMinimumSize(QSize(460, 400));
        gameWidget->setStyleSheet(QString::fromUtf8("\n"
"          #gameWidget {\n"
"           background-color: #2b78e4;\n"
"           border: 4px solid #1a4a8e;\n"
"           border-radius: 12px;\n"
"          }\n"
"          QLabel {\n"
"           min-width: 48px;\n"
"           max-width: 48px;\n"
"           min-height: 48px;\n"
"           max-height: 48px;\n"
"           background-color: #1a1a1a;\n"
"           border-radius: 24px;\n"
"           border: 2px solid #1a4a8e;\n"
"          }\n"
"         "));
        gridLayout = new QGridLayout(gameWidget);
        gridLayout->setSpacing(8);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(12, 12, 12, 12);
        cell_0_0 = new QLabel(gameWidget);
        cell_0_0->setObjectName("cell_0_0");
        cell_0_0->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_0_0, 0, 0, 1, 1);

        cell_0_1 = new QLabel(gameWidget);
        cell_0_1->setObjectName("cell_0_1");
        cell_0_1->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_0_1, 0, 1, 1, 1);

        cell_0_2 = new QLabel(gameWidget);
        cell_0_2->setObjectName("cell_0_2");
        cell_0_2->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_0_2, 0, 2, 1, 1);

        cell_0_3 = new QLabel(gameWidget);
        cell_0_3->setObjectName("cell_0_3");
        cell_0_3->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_0_3, 0, 3, 1, 1);

        cell_0_4 = new QLabel(gameWidget);
        cell_0_4->setObjectName("cell_0_4");
        cell_0_4->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_0_4, 0, 4, 1, 1);

        cell_0_5 = new QLabel(gameWidget);
        cell_0_5->setObjectName("cell_0_5");
        cell_0_5->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_0_5, 0, 5, 1, 1);

        cell_0_6 = new QLabel(gameWidget);
        cell_0_6->setObjectName("cell_0_6");
        cell_0_6->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_0_6, 0, 6, 1, 1);

        cell_1_0 = new QLabel(gameWidget);
        cell_1_0->setObjectName("cell_1_0");
        cell_1_0->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_1_0, 1, 0, 1, 1);

        cell_1_1 = new QLabel(gameWidget);
        cell_1_1->setObjectName("cell_1_1");
        cell_1_1->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_1_1, 1, 1, 1, 1);

        cell_1_2 = new QLabel(gameWidget);
        cell_1_2->setObjectName("cell_1_2");
        cell_1_2->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_1_2, 1, 2, 1, 1);

        cell_1_3 = new QLabel(gameWidget);
        cell_1_3->setObjectName("cell_1_3");
        cell_1_3->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_1_3, 1, 3, 1, 1);

        cell_1_4 = new QLabel(gameWidget);
        cell_1_4->setObjectName("cell_1_4");
        cell_1_4->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_1_4, 1, 4, 1, 1);

        cell_1_5 = new QLabel(gameWidget);
        cell_1_5->setObjectName("cell_1_5");
        cell_1_5->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_1_5, 1, 5, 1, 1);

        cell_1_6 = new QLabel(gameWidget);
        cell_1_6->setObjectName("cell_1_6");
        cell_1_6->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_1_6, 1, 6, 1, 1);

        cell_2_0 = new QLabel(gameWidget);
        cell_2_0->setObjectName("cell_2_0");
        cell_2_0->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_2_0, 2, 0, 1, 1);

        cell_2_1 = new QLabel(gameWidget);
        cell_2_1->setObjectName("cell_2_1");
        cell_2_1->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_2_1, 2, 1, 1, 1);

        cell_2_2 = new QLabel(gameWidget);
        cell_2_2->setObjectName("cell_2_2");
        cell_2_2->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_2_2, 2, 2, 1, 1);

        cell_2_3 = new QLabel(gameWidget);
        cell_2_3->setObjectName("cell_2_3");
        cell_2_3->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_2_3, 2, 3, 1, 1);

        cell_2_4 = new QLabel(gameWidget);
        cell_2_4->setObjectName("cell_2_4");
        cell_2_4->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_2_4, 2, 4, 1, 1);

        cell_2_5 = new QLabel(gameWidget);
        cell_2_5->setObjectName("cell_2_5");
        cell_2_5->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_2_5, 2, 5, 1, 1);

        cell_2_6 = new QLabel(gameWidget);
        cell_2_6->setObjectName("cell_2_6");
        cell_2_6->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_2_6, 2, 6, 1, 1);

        cell_3_0 = new QLabel(gameWidget);
        cell_3_0->setObjectName("cell_3_0");
        cell_3_0->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_3_0, 3, 0, 1, 1);

        cell_3_1 = new QLabel(gameWidget);
        cell_3_1->setObjectName("cell_3_1");
        cell_3_1->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_3_1, 3, 1, 1, 1);

        cell_3_2 = new QLabel(gameWidget);
        cell_3_2->setObjectName("cell_3_2");
        cell_3_2->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_3_2, 3, 2, 1, 1);

        cell_3_3 = new QLabel(gameWidget);
        cell_3_3->setObjectName("cell_3_3");
        cell_3_3->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_3_3, 3, 3, 1, 1);

        cell_3_4 = new QLabel(gameWidget);
        cell_3_4->setObjectName("cell_3_4");
        cell_3_4->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_3_4, 3, 4, 1, 1);

        cell_3_5 = new QLabel(gameWidget);
        cell_3_5->setObjectName("cell_3_5");
        cell_3_5->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_3_5, 3, 5, 1, 1);

        cell_3_6 = new QLabel(gameWidget);
        cell_3_6->setObjectName("cell_3_6");
        cell_3_6->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_3_6, 3, 6, 1, 1);

        cell_4_0 = new QLabel(gameWidget);
        cell_4_0->setObjectName("cell_4_0");
        cell_4_0->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_4_0, 4, 0, 1, 1);

        cell_4_1 = new QLabel(gameWidget);
        cell_4_1->setObjectName("cell_4_1");
        cell_4_1->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_4_1, 4, 1, 1, 1);

        cell_4_2 = new QLabel(gameWidget);
        cell_4_2->setObjectName("cell_4_2");
        cell_4_2->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_4_2, 4, 2, 1, 1);

        cell_4_3 = new QLabel(gameWidget);
        cell_4_3->setObjectName("cell_4_3");
        cell_4_3->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_4_3, 4, 3, 1, 1);

        cell_4_4 = new QLabel(gameWidget);
        cell_4_4->setObjectName("cell_4_4");
        cell_4_4->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_4_4, 4, 4, 1, 1);

        cell_4_5 = new QLabel(gameWidget);
        cell_4_5->setObjectName("cell_4_5");
        cell_4_5->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_4_5, 4, 5, 1, 1);

        cell_4_6 = new QLabel(gameWidget);
        cell_4_6->setObjectName("cell_4_6");
        cell_4_6->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_4_6, 4, 6, 1, 1);

        cell_5_0 = new QLabel(gameWidget);
        cell_5_0->setObjectName("cell_5_0");
        cell_5_0->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_5_0, 5, 0, 1, 1);

        cell_5_1 = new QLabel(gameWidget);
        cell_5_1->setObjectName("cell_5_1");
        cell_5_1->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_5_1, 5, 1, 1, 1);

        cell_5_2 = new QLabel(gameWidget);
        cell_5_2->setObjectName("cell_5_2");
        cell_5_2->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_5_2, 5, 2, 1, 1);

        cell_5_3 = new QLabel(gameWidget);
        cell_5_3->setObjectName("cell_5_3");
        cell_5_3->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_5_3, 5, 3, 1, 1);

        cell_5_4 = new QLabel(gameWidget);
        cell_5_4->setObjectName("cell_5_4");
        cell_5_4->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_5_4, 5, 4, 1, 1);

        cell_5_5 = new QLabel(gameWidget);
        cell_5_5->setObjectName("cell_5_5");
        cell_5_5->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_5_5, 5, 5, 1, 1);

        cell_5_6 = new QLabel(gameWidget);
        cell_5_6->setObjectName("cell_5_6");
        cell_5_6->setStyleSheet(QString::fromUtf8("background-color: #ccddff"));

        gridLayout->addWidget(cell_5_6, 5, 6, 1, 1);


        gameCenterLayout->addWidget(gameWidget);

        rightGameSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gameCenterLayout->addItem(rightGameSpacer);


        verticalLayout->addLayout(gameCenterLayout);

        Four_In_RowWindow->setCentralWidget(centralwidget);

        retranslateUi(Four_In_RowWindow);

        QMetaObject::connectSlotsByName(Four_In_RowWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Four_In_RowWindow)
    {
        Four_In_RowWindow->setWindowTitle(QCoreApplication::translate("Four_In_RowWindow", "Four In Row", nullptr));
        backButton->setText(QCoreApplication::translate("Four_In_RowWindow", "BACK", nullptr));
        titleLabel->setText(QCoreApplication::translate("Four_In_RowWindow", "FOUR IN ROW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Four_In_RowWindow: public Ui_Four_In_RowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOUR_IN_ROWWINDOW_H
