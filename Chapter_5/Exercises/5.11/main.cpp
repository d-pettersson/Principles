#include <iostream>
#include <vector>
#include <climits>

int main() {

    std::cout << "How many values of the Fibonacci series do you want to output?\n";

    std::vector<int> suite = {1};
    int max = 0;
    bool firstPass = false;

    int choice;
    std::cin >> choice;

    // i out of range? push 0 to suite
    // fibonacci equation (Fn = Fn-1 + Fn-2)
    for (int i = 1; i < choice; i++){
        if ((i-1) + (i-2) < 0)
            suite.push_back(0);
        else {
            suite.push_back(suite[i-1] + suite[i-2]);
            std::cout << suite[i] << " ";

            // overflow check
            // display i-1 value when overflow
            if (suite[i] < 0 && !firstPass) {
                max = suite[i-1];
                firstPass = true;
            }
        }
    }
    std::cout << "\nThis is the max value for an int in the fibonacci series: " << max;
}