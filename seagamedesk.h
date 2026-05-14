#ifndef SEAGAMEDESK_H
#define SEAGAMEDESK_H

#include <QMainWindow>
#include "QPushButton"
#include "seaboard.h"

namespace Ui {
class SeaGameDesk;
}

class SeaGameDesk : public QMainWindow
{
    Q_OBJECT

public:
    explicit SeaGameDesk(QWidget *parent = nullptr);
    ~SeaGameDesk();

private:
    Ui::SeaGameDesk *ui;

    //this is for player's action.
    void onPlayerClicked(int r, int c);
    //this is for computer.
    void onComputerClicked();
    //these will change the color of buttons
    void updateButtonSuccess(int r, int c, int board);
    void updateButtonFail(int r, int c, int board);

    //this is for check, if the game is ended.
    void checkWin();


    //this is the board of the player
    QPushButton* gridPlayer[SeaBoard::size][SeaBoard::size];
    //this is the board of the computer
    QPushButton* gridComputer[SeaBoard::size][SeaBoard::size];

    //these are board objects
    SeaBoard* boardPlayer;
    SeaBoard* boardComputer;

    //this is for defining turns.
    int turn;
};

#endif // SEAGAMEDESK_H
