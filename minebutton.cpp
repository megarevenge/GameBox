#include "minebutton.h"

MineButton::MineButton(int r, int c, QWidget *parent)
    : QPushButton(parent), row(r), col(c) {}

void MineButton::mousePressEvent(QMouseEvent *e) {
    if (e->button() == Qt::RightButton) {
        emit rightClicked(row, col);
    } else if (e->button() == Qt::LeftButton) {
        // We still want to emit a signal for left click
        emit leftClicked(row, col);
    }
    // Call base class implementation if you want default behavior
    QPushButton::mousePressEvent(e);
}