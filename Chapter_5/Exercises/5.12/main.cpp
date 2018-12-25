#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {

    std::vector<int> sequence = {1, 2, 3, 4};
    std::vector<int> input;
    int bullCount = 0;
    int cowCount = 0;
    std::string bull;
    std::string cow;

    std::cout << "Please type in four ints to guess: \n"
              << "(One cow is a correct in but at the wrong place\n"
              << "a bull is a correct int in the right place)\n";

    // input to vector
    for (int x; std::cin >> x;)
        input.push_back(x);

    // check if value is equal and same position
    // else check if value is in vector
    for (int i = 0; i < sequence.size(); ++i) {
        if (sequence[i] == input[i])
            ++bullCount;
        else if (std::binary_search(sequence.begin(), sequence.end(), input[i]))
            ++cowCount;
    }

    bullCount < 2 ? bull = " bull" : bull = " bulls";
    cowCount < 2 ? cow = " cow" : cow = " cows";
    std::cout << "You have " << bullCount << bull << " and " << cowCount << cow;

}