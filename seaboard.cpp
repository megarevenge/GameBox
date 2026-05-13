#include "seaboard.h"
#include "fstream"
#include "ctime"
#include "cstdlib"
using namespace std;

SeaBoard::SeaBoard() {
    //After creating object, I have to make sure all cells are set to zero, not garbage value.
    for(int r= 0; r < SeaBoard::size; r++) {
        for (int c = 0; c < SeaBoard::size; c++) {
            cell[r][c] = 0;
        }
    }
}

void SeaBoard::setCell(int value, int r, int c) {
    cell[r][c] = value;
}

int SeaBoard::getCell(int r, int c) {
    return cell[r][c];
}


void SeaBoard::resetCell() {
    //when its reset, everything should be zero, again.
    for(int r= 0; r < SeaBoard::size; r++) {
        for (int c = 0; c < SeaBoard::size; c++) {
            cell[r][c] = 0;
        }
    }
}


void SeaBoard::saveToFile(string fileName) {
    fstream file(fileName, ios::binary | ios::out);
    if(file) {
        file.write(reinterpret_cast<char*>(this), sizeof(*this));
    } else {
        throw "Opening save file failed.";
    }

    file.close();
}

SeaBoard SeaBoard::getFromFile(string fileName) {
    SeaBoard a;
    fstream file(fileName, ios::binary | ios::in);
    if(file) {
        file.read(reinterpret_cast<char*>(&a), sizeof(a));
        return a;
    } else {
        throw "Couldn't read from saved file.";
    }
}


SeaBoard::SeaBoard(int num) {
    srand(time(0));
    for(int i = 0; i < num;) {
        int r = rand()%10;
        int c = rand()%10;
        if (getCell(r, c) == 0) {
            setCell(1, r, c);
            i++;
        }
    }
}