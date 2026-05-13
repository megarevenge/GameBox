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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QPushButton *reset;
    QFrame *frame_of_fame;
    QLCDNumber *shipCount;
    QWidget *gridContainer;

    void setupUi(QMainWindow *ShipSelectingWindow)
    {
        if (ShipSelectingWindow->objectName().isEmpty())
            ShipSelectingWindow->setObjectName("ShipSelectingWindow");
        ShipSelectingWindow->resize(800, 600);
        ShipSelectingWindow->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        centralwidget = new QWidget(ShipSelectingWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(540, 390, 241, 161));
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
        font.setPointSize(26);
        save->setFont(font);
        save->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        save->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0)"));

        verticalLayout->addWidget(save);

        reset = new QPushButton(verticalLayoutWidget);
        reset->setObjectName("reset");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reset->sizePolicy().hasHeightForWidth());
        reset->setSizePolicy(sizePolicy1);
        reset->setFont(font);
        reset->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 0); color: black;"));

        verticalLayout->addWidget(reset);

        frame_of_fame = new QFrame(centralwidget);
        frame_of_fame->setObjectName("frame_of_fame");
        frame_of_fame->setGeometry(QRect(540, 80, 241, 301));
        frame_of_fame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"     background-color: #fffef0;   \n"
"    border: 4px solid #8B7355;   \n"
"      border-radius: 6px;\n"
"    }"));
        frame_of_fame->setFrameShape(QFrame::Shape::StyledPanel);
        frame_of_fame->setFrameShadow(QFrame::Shadow::Raised);
        shipCount = new QLCDNumber(centralwidget);
        shipCount->setObjectName("shipCount");
        shipCount->setGeometry(QRect(30, 20, 71, 41));
        shipCount->setDigitCount(2);
        shipCount->setMode(QLCDNumber::Mode::Dec);
        shipCount->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        shipCount->setProperty("value", QVariant(20.000000000000000));
        gridContainer = new QWidget(centralwidget);
        gridContainer->setObjectName("gridContainer");
        gridContainer->setGeometry(QRect(30, 70, 500, 500));
        ShipSelectingWindow->setCentralWidget(centralwidget);

        retranslateUi(ShipSelectingWindow);

        QMetaObject::connectSlotsByName(ShipSelectingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShipSelectingWindow)
    {
        ShipSelectingWindow->setWindowTitle(QCoreApplication::translate("ShipSelectingWindow", "MainWindow", nullptr));
        save->setText(QCoreApplication::translate("ShipSelectingWindow", "Save", nullptr));
        reset->setText(QCoreApplication::translate("ShipSelectingWindow", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShipSelectingWindow: public Ui_ShipSelectingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIPSELECTINGWINDOW_H
