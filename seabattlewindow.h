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
};
#endif // SEABATTLEWINDOW_H
