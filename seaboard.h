#ifndef SEABOARD_H
#define SEABOARD_H
#include <iostream>
using namespace std;
//this class is for controlling a board where ships will be placed.
//the user will save its own board, and it will be used when enemy hits some place on board
class SeaBoard
{
public:
    //I made its size 10
    static const int size = 10;


    //inside cell I will store ships.
    //If there is a ship in a specific cell, its value is 1, if it's not, then it will be 0.
    int cell[size][size];

    SeaBoard();

    //set cell is used when specific button in grid is clicled.
    void setCell(int value, int r, int c);

    //get cell is used to check if there was a hit
    int getCell(int r, int c);

    //this is used when user wants to clear all the board and start over
    void resetCell();

    //save to file is used when user saves its own board to binary file.
    void saveToFile(string fileName);

    //get from file will return board object from a file to start the game.
    SeaBoard getFromFile(string fileName);
};
#endif // SEABOARD_H
