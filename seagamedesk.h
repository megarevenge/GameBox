#ifndef SEAGAMEDESK_H
#define SEAGAMEDESK_H

#include <QMainWindow>

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
};

#endif // SEAGAMEDESK_H
