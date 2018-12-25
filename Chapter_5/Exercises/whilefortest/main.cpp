#include <iostream>
#include <vector>

int main() {

    std::vector<int> input;
    int count = 0;
    int keyInput;

    while (count < 5) {
        for(int x; std::cin >> keyInput;)
            input.push_back(x);
        ++count;
        for (auto x : input)
            std::cout << x << " ";
        input.clear();
    }
}