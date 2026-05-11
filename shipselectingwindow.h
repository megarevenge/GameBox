#ifndef SHIPSELECTINGWINDOW_H
#define SHIPSELECTINGWINDOW_H

#include "fstream"
#include <QMainWindow>
#include "QPushButton"
#include "board.h"

namespace Ui {
class ShipSelectingWindow;
}

class ShipSelectingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShipSelectingWindow(QWidget *parent = nullptr, fstream &file);
    ~ShipSelectingWindow();

private slots:
    void on_save_clicked();
    void on_reset_clicked();

private:
    Ui::ShipSelectingWindow *ui;

    void onCellClicked(int r, int c);
    void updateButton(int r, int c);

    QPushButton* grid[Board::size][Board::size];
    Board board;
    fstream file;
};

#endif // SHIPSELECTINGWINDOW_H
