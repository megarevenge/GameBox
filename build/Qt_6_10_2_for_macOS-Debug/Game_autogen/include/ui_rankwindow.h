/********************************************************************************
** Form generated from reading UI file 'rankwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKWINDOW_H
#define UI_RANKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RankWindow)
    {
        if (RankWindow->objectName().isEmpty())
            RankWindow->setObjectName("RankWindow");
        RankWindow->resize(800, 600);
        RankWindow->setStyleSheet(QString::fromUtf8("background-color: #e6eeff;"));
        centralwidget = new QWidget(RankWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(180, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(180, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: black;"));

        verticalLayout->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: #ccddff;\n"
"color: black;\n"
"padding-top: 20px;\n"
"font-weight: 600;\n"
"font-size: 20px;\n"
"font-family: \"Roboto\";"));

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #99bbff;\n"
"  margin-bottom: 10px;\n"
"}"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        RankWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RankWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        RankWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RankWindow);
        statusbar->setObjectName("statusbar");
        RankWindow->setStatusBar(statusbar);

        retranslateUi(RankWindow);

        QMetaObject::connectSlotsByName(RankWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RankWindow)
    {
        RankWindow->setWindowTitle(QCoreApplication::translate("RankWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("RankWindow", "Statistics", nullptr));
        pushButton->setText(QCoreApplication::translate("RankWindow", "Back to Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RankWindow: public Ui_RankWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKWINDOW_H
