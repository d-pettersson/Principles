#include <iostream>
#include <math.h>

using namespace std;

int main() {

    constexpr int NUM_SQUARES = 64;

    int squareNum = 0;
    int riceOnSquare = 0;
    int riceOnPastSquares = 0;

    for (int i = 1; i < NUM_SQUARES; ++i ) {
        squareNum = i;
        riceOnSquare = ;
        riceOnPastSquares += riceOnSquare;

        cout << riceOnSquare;

        if (riceOnPastSquares <= 1000)
            cout << "This is the amount of squares to have 1000 grains: " << squareNum << '\n';
        else if (riceOnPastSquares <= 10000)
            cout << "This is the amount of squares to have 10000 grains: " << squareNum << '\n';
        else if (riceOnPastSquares <= 100000)
            cout << "This is the amount of squares to have 1000 grains: " << squareNum << '\n';
    }
}