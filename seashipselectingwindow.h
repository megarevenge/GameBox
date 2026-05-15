#ifndef SEASHIPSELECTINGWINDOW_H
#define SEASHIPSELECTINGWINDOW_H

#include "fstream"
#include <QMainWindow>
#include "QPushButton"
#include "QLabel"
#include "seaboard.h"

namespace Ui {
class ShipSelectingWindow;
}

class SeaShipSelectingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SeaShipSelectingWindow(QWidget *parent = nullptr);
    ~SeaShipSelectingWindow();
    string fileName;

private slots:
    //these are the slots to manipulate the board.
    void on_save_clicked();
    void on_reset_clicked();
    void on_back_clicked();
    void on_random_clicked();

private:
    Ui::ShipSelectingWindow *ui;

    //this is for registering users click
    void onCellClicked(int r, int c);
    void updateButton(int r, int c);


    //this is board of the user
    QPushButton* grid[SeaBoard::size][SeaBoard::size];
    SeaBoard board;
};

#endif // SEASHIPSELECTINGWINDOW_H
