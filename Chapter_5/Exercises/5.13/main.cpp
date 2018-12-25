#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <iterator>

// generate random ints vector
// avoid duplicate numbers with while loop

std::vector<int> genRandVector(unsigned int &randSeed) {

    constexpr int SIZE_SEQ = 4;
    std::vector<int> randVector;

    srand(randSeed);

    for (int i = 0; i < SIZE_SEQ; ++i) {
        int randNum = rand() % 9;
        while (std::binary_search(randVector.begin(), randVector.end(), randNum)) {
            randNum = rand() % 9;
        }
        randVector.push_back(randNum);
    }
    return randVector;

}

int bullCowChecker(std::vector<int> &randSeq, std::vector<int> &inputSeq) {

    int bullCount = 0;
    int cowCount = 0;

    std::string bull;
    std::string cow;

    // check if value is equal and same position
    // else check if value is in vector
    for (int i = 0; i < randSeq.size(); ++i) {
        if (randSeq[i] == inputSeq[i])
            ++bullCount;
        else if (std::binary_search(randSeq.begin(), randSeq.end(), randSeq[i]))
            ++cowCount;
    }

    bullCount < 2 ? bull = " bull" : bull = " bulls";
    cowCount < 2 ? cow = " cow" : cow = " cows";
    std::cout << "You have " << bullCount << bull << " and " << cowCount << cow;

    return bullCount;
}

int main() {

    std::vector<int> sequence;

    int count = 0;

    // first ask for rand seed
    std::cout << "Please type a positive number: \n";
    unsigned int seed;
    std::cin >> seed;

    sequence = genRandVector(seed);

    std::cout << "Please type in four ints to guess: \n"
              << "(One cow is a correct int but at the wrong place\n"
              << "a bull is a correct int in the right place)\n";

    while (count < 5) {
        std::istream_iterator<int> iterBegin(std::cin), iterEnd;

        // using the range constructor
        std::vector<int> input(iterBegin, iterEnd);
        for (int x : input)
            std::cout << x << " ";
        count = bullCowChecker(sequence, input);
    }

}