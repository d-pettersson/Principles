#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<string> numbersAlpha = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> numbersDigit = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string numberIn = " ";

    cout << "Please input a number: ";
    cin >> numberIn;

    for (int i = 0; i < numbersAlpha.size(); ++i) {
        if (numberIn == numbersAlpha[i])
            cout << i;
        else if (numberIn == numbersDigit[i])
            cout << numbersAlpha[i];
    }

}