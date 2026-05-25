/********************************************************************************
** Form generated from reading UI file 'minegameover.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINEGAMEOVER_H
#define UI_MINEGAMEOVER_H

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

class Ui_MineGameOver
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MineGameOver)
    {
        if (MineGameOver->objectName().isEmpty())
            MineGameOver->setObjectName("MineGameOver");
        MineGameOver->resize(800, 629);
        MineGameOver->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"color: #000000;\n"
""));
        centralwidget = new QWidget(MineGameOver);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: \"Roboto\";\n"
"}"));

        verticalLayout->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto")});
        font1.setBold(true);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2, 0, Qt::AlignmentFlag::AlignHCenter);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3, 0, Qt::AlignmentFlag::AlignHCenter);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(117, 65));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Roboto")});
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: \"Roboto\";\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #ccddff;\n"
"	border-radius: 10px;\n"
"	font-family: \"Roboto\";\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 65));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: \"Roboto\";\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #ccddff;\n"
"	border-radius: 10px;\n"
"	font-family: \"Roboto\";\n"
"}"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(170, 220, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(170, 220, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(170, 220, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(170, 220, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        MineGameOver->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MineGameOver);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        MineGameOver->setMenuBar(menubar);
        statusbar = new QStatusBar(MineGameOver);
        statusbar->setObjectName("statusbar");
        MineGameOver->setStatusBar(statusbar);

        retranslateUi(MineGameOver);

        QMetaObject::connectSlotsByName(MineGameOver);
    } // setupUi

    void retranslateUi(QMainWindow *MineGameOver)
    {
        MineGameOver->setWindowTitle(QCoreApplication::translate("MineGameOver", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MineGameOver", "SCORE BOARD", nullptr));
        label_2->setStyleSheet(QCoreApplication::translate("MineGameOver", "QLabel{\n"
"	font-family: \"Roboto\";\n"
"}", nullptr));
        label_2->setText(QCoreApplication::translate("MineGameOver", "Best Time: 0", nullptr));
        label_3->setStyleSheet(QCoreApplication::translate("MineGameOver", "QLabel{\n"
"	font-family: \"Roboto\";\n"
"}", nullptr));
        label_3->setText(QCoreApplication::translate("MineGameOver", "Previous Result: 0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MineGameOver", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("MineGameOver", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MineGameOver: public Ui_MineGameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINEGAMEOVER_H
