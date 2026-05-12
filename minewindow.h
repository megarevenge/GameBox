#ifndef MINEWINDOW_H
#define MINEWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QTimer>
#include <QLabel>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "minebutton.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MineWindow;
}
QT_END_NAMESPACE

class MineWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MineWindow(QWidget *parent = nullptr);
    ~MineWindow() override;

private slots:
    void handleLeftClick(int r, int c);
    void handleRightClick(int r, int c);
    void placeMines();
    void updateTimer();
    void checkWin();
    void saveRecord(int seconds);
    void calculateNumbers();
    void revealEmpty(int r, int c);
private:
    MineButton* buttons[10][10]; // board 10x10

    int hasMines[10][10];

    int mineCount[10][10];

    QTimer *gameTimer;
    int secondsElapsed;
    QLabel *timeLabel;
    bool gameStarted;

    Ui::MineWindow *ui;
};
#endif // MINEWINDOW_H
