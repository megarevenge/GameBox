#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

class TicTacToe : public QWidget
{
    Q_OBJECT

public:
    explicit TicTacToe(QWidget *parent = nullptr);

private slots:
    void onButtonClicked(int index);
    void handleBack();

private:
    QPushButton *buttons[9];
    QLabel *statusLabel;
    int board[9]; // 0=empty, 1=X, 2=O
    bool gameEnd;

    void computerMove();
    int findWinningMove(int player);
    bool checkWinner(int player);
    void setWinner(QString msg);
    void resetGame();
};

#endif