#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include "minebutton.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void handleLeftClick(int r, int c);
    void handleRightClick(int r, int c);

private:
    MineButton* buttons[10][10]; // board 10x10

    int boardLogic[10][10]; // to check mines

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
