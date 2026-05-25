#include "rankwindow.h"
#include "ui_rankwindow.h"
#include "scoremanager.h"
#include "mainwindow.h"

RankWindow::RankWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RankWindow)
{
    ui->setupUi(this);


    // Create ScoreManager pointing to the same file
    ScoreManager sm("mine_scores.dat", "sudoku_scores.dat");

    // Populate the QListWidget
    ui->listWidget->clear();

    ui->listWidget->addItem("MineSweeper");

    // vector<Player> players = sm.getAllPlayers();

    // Minesweeper leaderboard
    vector<Player> players_m = sm.getMinesweeperPlayers();

    // Sort by score ascending (lowest time = best)
    sort(players_m.begin(), players_m.end(), [](Player& a, Player& b){
        return a.getScore() < b.getScore();
    });

    int m_rank = 1;
    for (Player& p : players_m) {
        QString line = QString("%1. %2 — %3 seconds")
                           .arg(m_rank)
                           .arg(QString::fromStdString(p.getName()))
                           .arg(p.getScore());
        ui->listWidget->addItem(line);
        m_rank++;
    }

    ui->listWidget->addItem("Sudoku");

    // Sudoku leaderboard
    vector<Player> players_s = sm.getSudokuPlayers();

    // Sort by score ascending (lowest time = best)
    sort(players_s.begin(), players_s.end(), [](Player& a, Player& b){
        return a.getScore() < b.getScore();
    });

    int s_rank = 1;
    for (Player& p : players_s) {
        QString line = QString("%1. %2 — %3 seconds")
                           .arg(s_rank)
                           .arg(QString::fromStdString(p.getName()))
                           .arg(p.getScore());
        ui->listWidget->addItem(line);
        s_rank++;
    }

}

void RankWindow::on_pushButton_clicked(){
    MainWindow* a = new MainWindow(); // Create the menu
    a->show();
    this->hide(); // hide current window
}

RankWindow::~RankWindow()
{
    delete ui;
}
