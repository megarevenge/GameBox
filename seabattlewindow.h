#ifndef SEABATTLEWINDOW_H
#define SEABATTLEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SeaBattleWindow;
}
QT_END_NAMESPACE

class SeaBattleWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SeaBattleWindow(QWidget *parent = nullptr);
    ~SeaBattleWindow() override;

private:
    Ui::SeaBattleWindow *ui;

private slots:
    void on_p1_clicked();
    void on_p2_clicked();
    void on_start_clicked();
};
#endif // SEABATTLEWINDOW_H
