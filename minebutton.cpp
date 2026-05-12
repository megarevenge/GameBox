#include "minebutton.h"

MineButton::MineButton(int r, int c, QWidget *parent)
    : QPushButton(parent), row(r), col(c) {}

void MineButton::mousePressEvent(QMouseEvent *e) {
    if (e->button() == Qt::RightButton) {
        emit rightClicked(row, col);
    } else if (e->button() == Qt::LeftButton) {
        emit leftClicked(row, col);
    }

    QPushButton::mousePressEvent(e);
}