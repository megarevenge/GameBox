/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(800, 600);
        User->setStyleSheet(QString::fromUtf8("QMainWindow { \n"
"	background-color: #e6eeff; \n"
"	color: #000;\n"
"}"));
        centralwidget = new QWidget(User);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(150, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(250, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        font.setPointSize(25);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #99bbff;\n"
"  margin-bottom: 10px;\n"
"}\n"
"QLabel{\n"
"	font-family: \"Roboto\", cursive, sans-serif;\n"
"	color: #000;\n"
"}\n"
"QPushButton{\n"
"	font-family: \"Roboto\", cursive, sans-serif;\n"
"}\n"
"QLineEdit{\n"
"	font-family: \"Roboto\", cursive, sans-serif;\n"
"	font-size: 20px;\n"
"}"));

        verticalLayout->addWidget(label_2, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto")});
        font1.setPointSize(20);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #99bbff;\n"
"  margin-bottom: 10px;\n"
"}\n"
"QLabel{\n"
"	font-family: \"Roboto\", cursive, sans-serif;\n"
"	color: #000;\n"
"}\n"
"QPushButton{\n"
"	font-family: \"Roboto\", cursive, sans-serif;\n"
"}\n"
"QLineEdit{\n"
"	font-family: \"Roboto\", cursive, sans-serif;\n"
"	font-size: 20px;\n"
"}"));

        horizontalLayout->addWidget(label, 0, Qt::AlignmentFlag::AlignVCenter);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 25));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: #fff;\n"
"color: #000;\n"
"padding-left: 15px;"));

        horizontalLayout->addWidget(lineEdit, 0, Qt::AlignmentFlag::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(200, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 10px;\n"
"  background-color: #99bbff;\n"
"  margin-bottom: 10px;\n"
"}\n"
"QLabel{\n"
"	font-family: \"Roboto\", cursive, sans-serif;\n"
"}\n"
"QPushButton{\n"
"	font-family: \"Roboto\", cursive, sans-serif;\n"
"}\n"
"QLineEdit{\n"
"	font-family: \"Roboto\", cursive, sans-serif;\n"
"	font-size: 20px;\n"
"}"));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

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

        gridLayout->addWidget(pushButton_2, 4, 0, 1, 1);

        User->setCentralWidget(centralwidget);
        menubar = new QMenuBar(User);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        User->setMenuBar(menubar);
        statusbar = new QStatusBar(User);
        statusbar->setObjectName("statusbar");
        User->setStatusBar(statusbar);

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QMainWindow *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("User", "Welcome to GAMEBOX", nullptr));
        label->setText(QCoreApplication::translate("User", "Enter your username: ", nullptr));
        pushButton->setText(QCoreApplication::translate("User", "Play", nullptr));
        pushButton_2->setText(QCoreApplication::translate("User", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
