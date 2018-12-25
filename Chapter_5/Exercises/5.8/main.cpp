#include <iostream>
#include <vector>

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
        }

        std::cout << result << '\n';
    }
    catch(std::exception& e) {
       std::cerr << "error: " << e.what() << '\n';
       return 1;
    }
    catch(...) {
        std::cerr << "Oops unknown exception\n";
        return 2;
    }

}