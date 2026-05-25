#include "scoremanager.h"

#include <fstream>

ScoreManager::ScoreManager(const string& mineFile, const string& sudokuFile)
    : m_mineFilename(mineFile), m_sudokuFilename(sudokuFile)
{
    loadFromFile(m_mineFilename,   m_minePlayers);
    loadFromFile(m_sudokuFilename, m_sudokuPlayers);
}

void ScoreManager::loadFromFile(const string& filename, vector<Player>& players) {
    ifstream file(filename, ios::binary);
    if (!file.is_open()) return;

    players.clear();

    while (true) {
        size_t nameLength;
        file.read(reinterpret_cast<char*>(&nameLength), sizeof(nameLength));
        if (file.eof()) break;

        string name(nameLength, '\0');
        file.read(&name[0], nameLength);

        int score = 0;
        file.read(reinterpret_cast<char*>(&score), sizeof(score));

        players.push_back(Player(name, score));
    }
}

void ScoreManager::saveToFile(const string& filename, vector<Player>& players) {
    ofstream file(filename, ios::binary | ios::trunc);
    if (!file.is_open()) return;

    for (Player& player : players) {
        string name = player.getName();
        size_t nameLength = name.size();
        int score = player.getScore();

        file.write(reinterpret_cast<char*>(&nameLength), sizeof(nameLength));
        file.write(name.c_str(), nameLength);
        file.write(reinterpret_cast<char*>(&score), sizeof(score));
    }
}

// ---- Minesweeper ----

void ScoreManager::updateMinesweeperScore(QString& nickname, int score) {
    string stdName = nickname.toStdString();
    for (Player& player : m_minePlayers) {
        if (player.getName() == stdName) {
            if (score < player.getScore()) {
                player.setScore(score);
                saveToFile(m_mineFilename, m_minePlayers);
            }
            return;
        }
    }
    m_minePlayers.push_back(Player(stdName, score));
    saveToFile(m_mineFilename, m_minePlayers);
}

int ScoreManager::getMinesweeperScore(QString& nickname) {
    string stdName = nickname.toStdString();
    for (Player& player : m_minePlayers) {
        if (player.getName() == stdName)
            return player.getScore();
    }
    return 0;
}

// ---- Sudoku ----

void ScoreManager::updateSudokuScore(QString& nickname, int score) {
    string stdName = nickname.toStdString();
    for (Player& player : m_sudokuPlayers) {
        if (player.getName() == stdName) {
            if (score < player.getScore()) {
                player.setScore(score);
                saveToFile(m_sudokuFilename, m_sudokuPlayers);
            }
            return;
        }
    }
    m_sudokuPlayers.push_back(Player(stdName, score));
    saveToFile(m_sudokuFilename, m_sudokuPlayers);
}

int ScoreManager::getSudokuScore(QString& nickname) {
    string stdName = nickname.toStdString();
    for (Player& player : m_sudokuPlayers) {
        if (player.getName() == stdName)
            return player.getScore();
    }
    return 0;
}