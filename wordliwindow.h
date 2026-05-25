#ifndef WORDLIWINDOW_H
#define WORDLIWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class WordliWindow;
}
QT_END_NAMESPACE

class WordliWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WordliWindow(QWidget *parent = nullptr);
    ~WordliWindow() override;

protected:

    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void on_checkButton_clicked();
    void on_restartButton_clicked();
    void on_pushButton_2_clicked();
private:
    Ui::WordliWindow *ui;
    QString targetWord;
    int currentRow = 0;
    int currentCol = 0;
    void resetGame();
    QString missedChars;
    static const int MAX_COLS = 5;
    static const int MAX_ROWS = 6;
    QLabel* getCell(int row, int col);
};

#endif