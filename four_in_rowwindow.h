#ifndef FOUR_IN_ROWWINDOW_H
#define FOUR_IN_ROWWINDOW_H

#include <QMainWindow>

namespace Ui { class Four_In_RowWindow; }

class Four_In_RowWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit Four_In_RowWindow(QWidget *parent = nullptr);
    ~Four_In_RowWindow();

private slots:
    void on_backButton_clicked();

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    Ui::Four_In_RowWindow *ui;
    int board[6][7] = {0};
    bool redTurn = true;
    void checkForWin();
    void resetGame();
};
#endif