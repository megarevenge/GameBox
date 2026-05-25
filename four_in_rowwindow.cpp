#include "four_in_rowwindow.h"
#include "ui_four_in_rowwindow.h"
#include <QEvent>
#include <QMessageBox>
#include "mainwindow.h"

Four_In_RowWindow::Four_In_RowWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Four_In_RowWindow)
{
    ui->setupUi(this);
    QList<QLabel*> labels = ui->gameWidget->findChildren<QLabel*>();
    for (int i = 0; i < labels.size(); ++i) {
        labels.at(i)->installEventFilter(this);
    }
    resetGame();
}

Four_In_RowWindow::~Four_In_RowWindow() {
    delete ui;
}

bool Four_In_RowWindow::eventFilter(QObject *obj, QEvent *event) {
    if (event->type() == QEvent::MouseButtonPress) {
        QString name = obj->objectName();
        QStringList parts = name.split("_");
        int col = parts.last().toInt();
        ui->ballButton->move(col * 63, 0);
        for (int r = 5; r >= 0; r--) {
            if (board[r][col] == 0) {
                if (redTurn) {
                    board[r][col] = 1;
                } else {
                    board[r][col] = 2;
                }
                QString target = "cell_" + QString::number(r) + "_" + QString::number(col);
                QLabel* cell = ui->gameWidget->findChild<QLabel*>(target);
                if (cell != nullptr) {
                    QString color = "";
                    if (redTurn) color = "#e63946";
                    else color = "#fadb14";
                    cell->setStyleSheet("background-color: " + color + "; border-radius: 24px; border: 2px solid #1a4a8e;");
                }
                checkForWin();
                redTurn = !redTurn;
                QString nextColor = "";
                QString nextBorder = "";
                if (redTurn) {
                    nextColor = "#e63946";
                    nextBorder = "#b91d1d";
                } else {
                    nextColor = "#fadb14";
                    nextBorder = "#b29b11";
                }
                ui->ballButton->setStyleSheet("QPushButton { background-color: " + nextColor + "; border: 2px solid " + nextBorder + "; border-radius: 24px;}");
                break;
            }
        }
        return true;
    }
    return false;
}

void Four_In_RowWindow::resetGame() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            board[i][j] = 0;
        }
    }
    QList<QLabel*> labels = ui->gameWidget->findChildren<QLabel*>();
    for (int i = 0; i < labels.size(); i++) {
        QLabel* lbl = labels.at(i);
        if (lbl->objectName().indexOf("cell_") == 0) {
            lbl->setStyleSheet("background-color: #ffffff; border-radius: 24px; border: 2px solid #1a4a8e;");
        }
    }
    redTurn = true;
}


void Four_In_RowWindow::checkForWin() {
    int p = 0;
    if (redTurn) {
        p = 1;
    } else {
        p = 2;
    }

    for (int r = 0; r < 6; r++) {
        for (int c = 0; c < 7; c++) {
            if (board[r][c] == p) {
                if (c + 3 < 7) {
                    if (board[r][c+1] == p && board[r][c+2] == p && board[r][c+3] == p) {
                        QString name = "";
                        if (p == 1) name = "Red player";
                        else name = "Yellow player";
                        QMessageBox::information(this, "", name + " wins!");
                        resetGame();
                        return;
                    }
                }

                if (r + 3 < 6) {
                    if (board[r+1][c] == p && board[r+2][c] == p && board[r+3][c] == p) {
                        QString name = (p == 1) ? "Red player" : "Yellow player";
                        QMessageBox::information(this, "", name + " wins!");
                        resetGame();
                        return;
                    }
                }

                if (r + 3 < 6 && c + 3 < 7) {
                    if (board[r+1][c+1] == p && board[r+2][c+2] == p && board[r+3][c+3] == p) {
                        QString name = (p == 1) ? "Red player" : "Yellow player";
                        QMessageBox::information(this, "", name + " wins!");
                        resetGame();
                        return;
                    }
                }

                if (r + 3 < 6 && c - 3 >= 0) {
                    if (board[r+1][c-1] == p && board[r+2][c-2] == p && board[r+3][c-3] == p) {
                        QString name = (p == 1) ? "Red player" : "Yellow player";
                        QMessageBox::information(this, "", name + " wins!");
                        resetGame();
                        return;
                    }
                }

            }
        }
    }
    bool hasEmpty = false;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (board[i][j] == 0) {
                hasEmpty = true;
            }
        }
    }
    if (hasEmpty == false) {
        QMessageBox::information(this, "End", "Draw!");
        resetGame();
    }
}

void Four_In_RowWindow::on_backButton_clicked(){
    MainWindow* a = new MainWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

