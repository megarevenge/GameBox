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
    void on_save_clicked();
    void on_reset_clicked();

private:
    Ui::ShipSelectingWindow *ui;

    void onCellClicked(int r, int c);
    void updateButton(int r, int c);

    QLabel *shipCount;

    QPushButton* grid[SeaBoard::size][SeaBoard::size];
    SeaBoard board;
};

#endif // SEASHIPSELECTINGWINDOW_H
