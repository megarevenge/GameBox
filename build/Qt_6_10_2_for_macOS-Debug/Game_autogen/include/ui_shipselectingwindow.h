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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShipSelectingWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *save;
    QSpacerItem *horizontalSpacer;
    QPushButton *reset;
    QFrame *about;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLCDNumber *shipCount;
    QWidget *gridContainer;
    QPushButton *back;
    QPushButton *random;

    void setupUi(QMainWindow *ShipSelectingWindow)
    {
        if (ShipSelectingWindow->objectName().isEmpty())
            ShipSelectingWindow->setObjectName("ShipSelectingWindow");
        ShipSelectingWindow->resize(800, 600);
        ShipSelectingWindow->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ShipSelectingWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(230, 238, 255)"));
        centralwidget = new QWidget(ShipSelectingWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(550, 370, 241, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        save = new QPushButton(verticalLayoutWidget);
        save->setObjectName("save");
        save->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(save->sizePolicy().hasHeightForWidth());
        save->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        save->setFont(font);
        save->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        save->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 0.5em;\n"
"  background: #99bbff;\n"
"  border: 3px solid #000000;\n"
"}"));

        verticalLayout->addWidget(save);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        reset = new QPushButton(verticalLayoutWidget);
        reset->setObjectName("reset");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reset->sizePolicy().hasHeightForWidth());
        reset->setSizePolicy(sizePolicy1);
        reset->setFont(font);
        reset->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #004de6;\n"
"  padding: 0.7em 1.7em;\n"
"  font-size: 18px;\n"
"  border-radius: 0.5em;\n"
"  background: #ccddff;\n"
"  border: 3px solid #000000;\n"
"}"));

        verticalLayout->addWidget(reset);

        about = new QFrame(centralwidget);
        about->setObjectName("about");
        about->setGeometry(QRect(550, 50, 241, 311));
        about->setStyleSheet(QString::fromUtf8("QFrame {\n"
"     background-color: #80aaff;   \n"
"    border: 4px solid #002266;   \n"
"      border-radius: 6px;\n"
"    }"));
        about->setFrameShape(QFrame::Shape::StyledPanel);
        about->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(about);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 201, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #ffffff; border: none;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(about);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 201, 41));
        QFont font2;
        font2.setPointSize(12);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8(" color: #ffffff; border: none;"));
        label_3 = new QLabel(about);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 110, 221, 51));
        QFont font3;
        font3.setPointSize(24);
        font3.setBold(true);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #ffffff; border: none;"));
        shipCount = new QLCDNumber(centralwidget);
        shipCount->setObjectName("shipCount");
        shipCount->setGeometry(QRect(30, 20, 71, 41));
        shipCount->setStyleSheet(QString::fromUtf8("color: #6999ff; border-color: #001133"));
        shipCount->setDigitCount(2);
        shipCount->setMode(QLCDNumber::Mode::Dec);
        shipCount->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        shipCount->setProperty("value", QVariant(20.000000000000000));
        gridContainer = new QWidget(centralwidget);
        gridContainer->setObjectName("gridContainer");
        gridContainer->setGeometry(QRect(30, 70, 500, 500));
        back = new QPushButton(centralwidget);
        back->setObjectName("back");
        back->setGeometry(QRect(690, 10, 100, 32));
        back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #003cb3;\n"
"  font-size: 18px;\n"
"  border-radius: 0.5em;\n"
"  background: #99bbff;\n"
"  border: 3px solid #000000;\n"
"}"));
        random = new QPushButton(centralwidget);
        random->setObjectName("random");
        random->setGeometry(QRect(550, 540, 100, 32));
        random->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  font-family: \"Roboto\", cursive, sans-serif;\n"
"  color: #004de6;\n"
"  font-size: 18px;\n"
"  border-radius: 0.5em;\n"
"  background: #ccddff;\n"
"  border: 3px solid #000000;\n"
"}"));
        ShipSelectingWindow->setCentralWidget(centralwidget);

        retranslateUi(ShipSelectingWindow);

        QMetaObject::connectSlotsByName(ShipSelectingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShipSelectingWindow)
    {
        ShipSelectingWindow->setWindowTitle(QCoreApplication::translate("ShipSelectingWindow", "MainWindow", nullptr));
        save->setText(QCoreApplication::translate("ShipSelectingWindow", "Save", nullptr));
        reset->setText(QCoreApplication::translate("ShipSelectingWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("ShipSelectingWindow", "Welcome To Sea Battle", nullptr));
        label_2->setText(QCoreApplication::translate("ShipSelectingWindow", "Made by:", nullptr));
        label_3->setText(QCoreApplication::translate("ShipSelectingWindow", "CosmosByME", nullptr));
        back->setText(QCoreApplication::translate("ShipSelectingWindow", "Back", nullptr));
        random->setText(QCoreApplication::translate("ShipSelectingWindow", "Radom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShipSelectingWindow: public Ui_ShipSelectingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIPSELECTINGWINDOW_H
