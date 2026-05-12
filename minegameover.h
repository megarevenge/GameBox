#ifndef MINEGAMEOVER_H
#define MINEGAMEOVER_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MineGameOver;
}

class MineGameOver : public QMainWindow
{
    Q_OBJECT

public:
    explicit MineGameOver(QWidget *parent = nullptr);
    ~MineGameOver();

private slots:
    void displayRecords();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MineGameOver *ui;
};

#endif // MINEGAMEOVER_H
