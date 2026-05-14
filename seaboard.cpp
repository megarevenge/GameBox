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

//it will put the value to the (r,c) place.
void SeaBoard::setCell(int value, int r, int c) {
    cell[r][c] = value;
}


//it will get the value from (r,c) cell.
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
    //I will open binary file in output mode.
    fstream file(fileName, ios::binary | ios::out);
    if(file) {
        file.write(reinterpret_cast<char*>(this), sizeof(*this));
    } else {
        //this is for try-catch
        throw "Opening save file failed.";
    }

    //after doing work, ofcourse I will close the file.
    file.close();
}

SeaBoard getFromFile(string fileName) {
    SeaBoard a;
    //I will open binary file to read.
    fstream file(fileName, ios::binary | ios::in);
    if(file) {
        file.read(reinterpret_cast<char*>(&a), sizeof(a));
        return a;
    } else {
        //this is for try-catch
        throw "Couldn't read from saved file.";
    }

    //after doing work, ofcourse I will close the file.
    file.close();
}


SeaBoard::SeaBoard(int num) {
    //After creating object, I have to make sure all cells are set to zero, not garbage value.
    for(int r= 0; r < SeaBoard::size; r++) {
        for (int c = 0; c < SeaBoard::size; c++) {
            cell[r][c] = 0;
        }
    }

    //this is for adding seed, so I will get different number.
    srand(time(0));
    //this will make sure that all ships provided will be used.
    for(int i = 0; i < num;) {
        //I am using %10, because it will always gives me number between 0 and 9.
        int r = rand()%10;
        int c = rand()%10;
        //If the cell is empty, it will place a ship.
        //otherwise i won't iterate, and it will again generate new r and c.
        if (getCell(r, c) == 0) {
            setCell(1, r, c);
            i++;
        }
    }
}