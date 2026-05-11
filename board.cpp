#include "board.h"
#include "fstream"
using namespace std;

Board::Board() {
    //After creating object, I have to make sure all cells are set to zero, not garbage value.
    for(int r= 0; r < Board::size; r++) {
        for (int c = 0; c < Board::size; c++) {
            cell[r][c] = 0;
        }
    }
}

void Board::setCell(int value, int r, int c) {
    cell[r][c] = value;
}

int Board::getCell(int r, int c) {
    return cell[r][c];
}


void Board::resetCell() {
    //when its reset, everything should be zero, again.
    for(int r= 0; r < Board::size; r++) {
        for (int c = 0; c < Board::size; c++) {
            cell[r][c] = 0;
        }
    }
}


void Board::saveToFile(fstream &file) {
    file.write(reinterpret_cast<char*>(this), sizeof(*this));
}

Board Board::getFromFile(fstream &file) {
    Board a;
    file.read(reinterpret_cast<char*>(&a), sizeof(a));
    return a;
}