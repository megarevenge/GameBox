#ifndef USER_H
#define USER_H

#include <QMainWindow>

namespace Ui {
class User;
}

class User : public QMainWindow
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::User *ui;
};

#endif // USER_H
