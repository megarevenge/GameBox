#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "scoremanager.h"

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
    void on_quit_clicked();
    void on_MineSweeper_clicked();
    void on_SeaBattle_clicked();
    void on_Wordle_clicked();
    void on_TicTacToe_clicked();
    void on_Sudoku_clicked();
    void on_FourInRow_clicked();
    void on_Rank_clicked();
private:
    Ui::MainWindow *ui;
    QString m_currentNickname;
    ScoreManager m_scoreManager;
};
#endif // MAINWINDOW_H
