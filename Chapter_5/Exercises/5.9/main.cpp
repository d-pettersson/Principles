#include <iostream>
#include <vector>
#include <climits>

int main() {

    try {
        std::cout << "Please enter the number of values you want to sum: \n";
        int valNum;
        std::cin >> valNum;

        std::cout << "Please enter some integers (press '|' to stop): \n";
        std::vector<int> input;
        for (int x; std::cin >> x;)
            input.push_back(x);

        if (input.size() < valNum)
            std::cerr << "The sum of numbers is higher than the number of integers.\n";

        int result = 0;
        for (int i = 0; i < valNum; i++) {
            result += input[i];
            if (result >= INT_MAX)
                std::cerr << "The result is bigger than sizeof(int)\n";
        }

        std::cout << result << '\n';
    }
    catch(std::out_of_range& o) {
        std::cerr << "Error: " << o.what() << '\n';
        return 1;
    }
    catch(...) {
        std::cerr << "Unknown error\n";
        return 2;
    }

}