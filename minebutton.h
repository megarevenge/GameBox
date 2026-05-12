#ifndef MINEBUTTON_H
#define MINEBUTTON_H

#include <QPushButton>
#include <QMouseEvent>

class MineButton : public QPushButton {
    Q_OBJECT

public:
    explicit MineButton(int r, int c, QWidget *parent = nullptr);

signals:
    void leftClicked(int r, int c);
    void rightClicked(int r, int c);

protected:
    void mousePressEvent(QMouseEvent *e) override;

private:
    int row;
    int col;
};

#endif // MINEBUTTON_H
