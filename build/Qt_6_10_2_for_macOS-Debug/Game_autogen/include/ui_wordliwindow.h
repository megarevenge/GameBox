/********************************************************************************
** Form generated from reading UI file 'wordliwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDLIWINDOW_H
#define UI_WORDLIWINDOW_H

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

class Ui_WordliWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *leftSpacer;
    QWidget *gameWidget;
    QGridLayout *gridLayout;
    QLabel *cell_0_0;
    QLabel *cell_0_1;
    QLabel *cell_0_2;
    QLabel *cell_0_3;
    QLabel *cell_0_4;
    QLabel *cell_1_0;
    QLabel *cell_1_1;
    QLabel *cell_1_2;
    QLabel *cell_1_3;
    QLabel *cell_1_4;
    QLabel *cell_2_0;
    QLabel *cell_2_1;
    QLabel *cell_2_2;
    QLabel *cell_2_3;
    QLabel *cell_2_4;
    QLabel *cell_3_0;
    QLabel *cell_3_1;
    QLabel *cell_3_2;
    QLabel *cell_3_3;
    QLabel *cell_3_4;
    QLabel *cell_4_0;
    QLabel *cell_4_1;
    QLabel *cell_4_2;
    QLabel *cell_4_3;
    QLabel *cell_4_4;
    QLabel *cell_5_0;
    QLabel *cell_5_1;
    QLabel *cell_5_2;
    QLabel *cell_5_3;
    QLabel *cell_5_4;
    QSpacerItem *rightSpacer;
    QPushButton *checkButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *usedCharsLabel;
    QSpacerItem *horizontalSpacer_used;
    QPushButton *pushButton_2;
    QPushButton *restartButton;

    void setupUi(QMainWindow *WordliWindow)
    {
        if (WordliWindow->objectName().isEmpty())
            WordliWindow->setObjectName("WordliWindow");
        WordliWindow->resize(800, 652);
        WordliWindow->setStyleSheet(QString::fromUtf8("QMainWindow { background-color: #e6eeff; }"));
        centralwidget = new QWidget(WordliWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setMinimumSize(QSize(0, 80));
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
" font-size: 42px;\n"
" color: #6699ff;\n"
" font-weight: 700;\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        leftSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(leftSpacer);

        gameWidget = new QWidget(centralwidget);
        gameWidget->setObjectName("gameWidget");
        gameWidget->setMinimumSize(QSize(300, 370));
        gameWidget->setMaximumSize(QSize(350, 420));
        gameWidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
" background-color: #ccddff;\n"
" border: 2px solid #3a3a3c;\n"
" border-radius: 12px;\n"
"}"));
        gridLayout = new QGridLayout(gameWidget);
        gridLayout->setSpacing(8);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(12, 12, 12, 12);
        cell_0_0 = new QLabel(gameWidget);
        cell_0_0->setObjectName("cell_0_0");

        gridLayout->addWidget(cell_0_0, 0, 0, 1, 1);

        cell_0_1 = new QLabel(gameWidget);
        cell_0_1->setObjectName("cell_0_1");

        gridLayout->addWidget(cell_0_1, 0, 1, 1, 1);

        cell_0_2 = new QLabel(gameWidget);
        cell_0_2->setObjectName("cell_0_2");

        gridLayout->addWidget(cell_0_2, 0, 2, 1, 1);

        cell_0_3 = new QLabel(gameWidget);
        cell_0_3->setObjectName("cell_0_3");

        gridLayout->addWidget(cell_0_3, 0, 3, 1, 1);

        cell_0_4 = new QLabel(gameWidget);
        cell_0_4->setObjectName("cell_0_4");

        gridLayout->addWidget(cell_0_4, 0, 4, 1, 1);

        cell_1_0 = new QLabel(gameWidget);
        cell_1_0->setObjectName("cell_1_0");

        gridLayout->addWidget(cell_1_0, 1, 0, 1, 1);

        cell_1_1 = new QLabel(gameWidget);
        cell_1_1->setObjectName("cell_1_1");

        gridLayout->addWidget(cell_1_1, 1, 1, 1, 1);

        cell_1_2 = new QLabel(gameWidget);
        cell_1_2->setObjectName("cell_1_2");

        gridLayout->addWidget(cell_1_2, 1, 2, 1, 1);

        cell_1_3 = new QLabel(gameWidget);
        cell_1_3->setObjectName("cell_1_3");

        gridLayout->addWidget(cell_1_3, 1, 3, 1, 1);

        cell_1_4 = new QLabel(gameWidget);
        cell_1_4->setObjectName("cell_1_4");

        gridLayout->addWidget(cell_1_4, 1, 4, 1, 1);

        cell_2_0 = new QLabel(gameWidget);
        cell_2_0->setObjectName("cell_2_0");

        gridLayout->addWidget(cell_2_0, 2, 0, 1, 1);

        cell_2_1 = new QLabel(gameWidget);
        cell_2_1->setObjectName("cell_2_1");

        gridLayout->addWidget(cell_2_1, 2, 1, 1, 1);

        cell_2_2 = new QLabel(gameWidget);
        cell_2_2->setObjectName("cell_2_2");

        gridLayout->addWidget(cell_2_2, 2, 2, 1, 1);

        cell_2_3 = new QLabel(gameWidget);
        cell_2_3->setObjectName("cell_2_3");

        gridLayout->addWidget(cell_2_3, 2, 3, 1, 1);

        cell_2_4 = new QLabel(gameWidget);
        cell_2_4->setObjectName("cell_2_4");

        gridLayout->addWidget(cell_2_4, 2, 4, 1, 1);

        cell_3_0 = new QLabel(gameWidget);
        cell_3_0->setObjectName("cell_3_0");

        gridLayout->addWidget(cell_3_0, 3, 0, 1, 1);

        cell_3_1 = new QLabel(gameWidget);
        cell_3_1->setObjectName("cell_3_1");

        gridLayout->addWidget(cell_3_1, 3, 1, 1, 1);

        cell_3_2 = new QLabel(gameWidget);
        cell_3_2->setObjectName("cell_3_2");

        gridLayout->addWidget(cell_3_2, 3, 2, 1, 1);

        cell_3_3 = new QLabel(gameWidget);
        cell_3_3->setObjectName("cell_3_3");

        gridLayout->addWidget(cell_3_3, 3, 3, 1, 1);

        cell_3_4 = new QLabel(gameWidget);
        cell_3_4->setObjectName("cell_3_4");

        gridLayout->addWidget(cell_3_4, 3, 4, 1, 1);

        cell_4_0 = new QLabel(gameWidget);
        cell_4_0->setObjectName("cell_4_0");

        gridLayout->addWidget(cell_4_0, 4, 0, 1, 1);

        cell_4_1 = new QLabel(gameWidget);
        cell_4_1->setObjectName("cell_4_1");

        gridLayout->addWidget(cell_4_1, 4, 1, 1, 1);

        cell_4_2 = new QLabel(gameWidget);
        cell_4_2->setObjectName("cell_4_2");

        gridLayout->addWidget(cell_4_2, 4, 2, 1, 1);

        cell_4_3 = new QLabel(gameWidget);
        cell_4_3->setObjectName("cell_4_3");

        gridLayout->addWidget(cell_4_3, 4, 3, 1, 1);

        cell_4_4 = new QLabel(gameWidget);
        cell_4_4->setObjectName("cell_4_4");

        gridLayout->addWidget(cell_4_4, 4, 4, 1, 1);

        cell_5_0 = new QLabel(gameWidget);
        cell_5_0->setObjectName("cell_5_0");

        gridLayout->addWidget(cell_5_0, 5, 0, 1, 1);

        cell_5_1 = new QLabel(gameWidget);
        cell_5_1->setObjectName("cell_5_1");

        gridLayout->addWidget(cell_5_1, 5, 1, 1, 1);

        cell_5_2 = new QLabel(gameWidget);
        cell_5_2->setObjectName("cell_5_2");

        gridLayout->addWidget(cell_5_2, 5, 2, 1, 1);

        cell_5_3 = new QLabel(gameWidget);
        cell_5_3->setObjectName("cell_5_3");

        gridLayout->addWidget(cell_5_3, 5, 3, 1, 1);

        cell_5_4 = new QLabel(gameWidget);
        cell_5_4->setObjectName("cell_5_4");

        gridLayout->addWidget(cell_5_4, 5, 4, 1, 1);


        horizontalLayout->addWidget(gameWidget);

        rightSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(rightSpacer);


        verticalLayout->addLayout(horizontalLayout);

        checkButton = new QPushButton(centralwidget);
        checkButton->setObjectName("checkButton");
        checkButton->setMinimumSize(QSize(200, 28));
        checkButton->setMaximumSize(QSize(300, 40));
        checkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-family: \"Roboto\", cursive, sans-serif;\n"
" background-color: #6699ff;\n"
" color: #1e1e1e;\n"
" border-radius: 10px;\n"
" font-weight: 600;\n"
" padding: 6px;\n"
"}\n"
"QPushButton:hover { background-color: #5a8df0; }\n"
"QPushButton:pressed { background-color: #4f7fe0; }\n"
""));

        verticalLayout->addWidget(checkButton, 0, Qt::AlignmentFlag::AlignHCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        usedCharsLabel = new QLabel(centralwidget);
        usedCharsLabel->setObjectName("usedCharsLabel");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        usedCharsLabel->setFont(font);
        usedCharsLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: black;\n"
"}"));

        horizontalLayout_2->addWidget(usedCharsLabel);

        horizontalSpacer_used = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_used);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #99bbff;\n"
"  margin-bottom: 10px;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_2);

        restartButton = new QPushButton(centralwidget);
        restartButton->setObjectName("restartButton");
        restartButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #99bbff;\n"
"  margin-bottom: 10px;\n"
"}"));

        horizontalLayout_2->addWidget(restartButton);


        verticalLayout->addLayout(horizontalLayout_2);

        WordliWindow->setCentralWidget(centralwidget);

        retranslateUi(WordliWindow);

        QMetaObject::connectSlotsByName(WordliWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WordliWindow)
    {
        WordliWindow->setWindowTitle(QCoreApplication::translate("WordliWindow", "Wordli", nullptr));
        titleLabel->setText(QCoreApplication::translate("WordliWindow", "WORDLE", nullptr));
        checkButton->setText(QCoreApplication::translate("WordliWindow", "CHECK", nullptr));
        usedCharsLabel->setText(QCoreApplication::translate("WordliWindow", "Used Chars:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("WordliWindow", "Back", nullptr));
        restartButton->setText(QCoreApplication::translate("WordliWindow", "RESTART", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WordliWindow: public Ui_WordliWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDLIWINDOW_H
