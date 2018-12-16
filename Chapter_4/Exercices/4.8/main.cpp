#include <iostream>
#include <math.h>

using namespace std;

int main() {

    constexpr int NUM_SQUARES = 64;
    constexpr int NUM_SQUARES_SMALL = 1000;
    constexpr int NUM_SQUARES_MED = 1000000;
    constexpr int NUM_SQUARES_LARGE = 1000000000;

    int squareNum = 0;
    int squareNumSmall = 0;
    int squareNumMed = 0;
    int squareNumLarge = 0;
    double riceOnSquare = 0;
    double riceOnPastSquares = 0;

    for (int i = 1; i < NUM_SQUARES; ++i) {
        squareNum = i;
        riceOnSquare = pow(2, i);
        riceOnPastSquares += riceOnSquare;

        if (riceOnPastSquares <= NUM_SQUARES_SMALL)
            squareNumSmall = squareNum;
        else if (riceOnPastSquares <= NUM_SQUARES_MED)
            squareNumMed = squareNum;
        else if (riceOnPastSquares <= NUM_SQUARES_LARGE)
            squareNumLarge = squareNum;
    }

    cout << "This is the amount of squares to have 1000 grains: " << squareNumSmall << '\n'
        << "This is the amount of squares to have 1'000'000 grains: " << squareNumMed << '\n'
        << "This is the amount of squares to have 1'000'000'000 grains: " << squareNumLarge << '\n';

}