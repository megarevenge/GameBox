#ifndef SUDOKUWINDOW_H
#define SUDOKUWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QString>
#include <QLabel>
#include <QTimer>
#include "scoremanager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class SudokuWindow;
}
QT_END_NAMESPACE

class SudokuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SudokuWindow(QWidget *parent = nullptr);
    ~SudokuWindow() override;

private slots:
    void on_backButton_clicked();
    void on_resetButton_clicked();
    //void on_scoreButton_clicked();
    void onTimerTick();

    void on_pushButton_clicked();

private:
    Ui::SudokuWindow *ui;

    // Player info saidjanov
    QString nickname;
    int points = 0;

    // Timer
    QTimer *gameTimer = nullptr;
    int elapsedSeconds = 0;
    bool isStarted = false;
    bool solvedCells[9][9] = {false};

    // Left-numbers labels (1–9)
    QLabel* leftNumber[9];

    // Solved board
    int board[9][9] = {
        {5,3,4, 6,7,8, 9,1,2},
        {6,7,2, 1,9,5, 3,4,8},
        {1,9,8, 3,4,2, 5,6,7},

        {8,5,9, 7,6,1, 4,2,3},
        {4,2,6, 8,5,3, 7,9,1},
        {7,1,3, 9,2,4, 8,5,6},

        {9,6,1, 5,3,7, 2,8,4},
        {2,8,7, 4,1,9, 6,3,5},
        {3,4,5, 2,8,6, 1,7,9}
    };

    // Board cells
    QLineEdit* cells[9][9];

    // functions
    void CreateBoard();
    void createLeftPanel();
    void updateLeftNumbers();
    void updateScoreLabel();
    void updateTimerLabel();
    void RemoveCells();
    void checkWin();
    void CheckInput(int x, int y, const QString &text);

    // Build the border-aware stylesheet for one cell
    QString cellBaseStyle(int x, int y) const;


    ScoreManager m_scoreManager;
};

#endif // SUDOKUWINDOW_H
