#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include <string>
#include <vector>
#include <QString>

using namespace std;

class Player{
private:
    string m_name;
    int m_score;
public:
    // default constructor
    Player(const string& name = "", int score = 0)
        : m_name(name), m_score(score) {}

    // getter and setter functions
    string getName(){
        return m_name;
    }
    int getScore(){
        return m_score;
    }
    void setScore(int score){
        m_score = score;
    }
};

class ScoreManager
{
private:
    string m_mineFilename;
    string m_sudokuFilename;
public:
    vector<Player> m_minePlayers;
    vector<Player> m_sudokuPlayers;

    void loadFromFile(const string& filename, vector<Player>& players);
    void saveToFile(const string& filename, vector<Player>& players);

    ScoreManager(const string& mineFile = "mine_scores.dat", const string& sudokuFile = "sudoku_scores.dat");

    // Minesweeper
    void updateMinesweeperScore(QString& nickname, int score);
    int  getMinesweeperScore(QString& nickname);
    vector<Player> getMinesweeperPlayers() { return m_minePlayers; }

    // Sudoku
    void updateSudokuScore(QString& nickname, int score);
    int  getSudokuScore(QString& nickname);
    vector<Player> getSudokuPlayers() { return m_sudokuPlayers; }

};

#endif // SCOREMANAGER_H
