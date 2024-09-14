#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <vector>
using namespace std;

// create constant variables
const int empty = 0;            // no ship, only water
const int occupied = 1;         // ship
const int missed = 2;           // did not hit a ship
const int hit = 3;              // hit a ship
int board[12][12];              // 12 by 12 game board

//Array for board
void initializeBoard(int array1[12][12]) {
    // create a blank board
    for (int x = 0; x < 12; x++) {
        for (int y = 0; y < 12; y++) {
            array1[x][y] = occupied;
        }
    }
}

int main() {
    initializeBoard(board);
    cout << board;
    return 0; // end program
} 