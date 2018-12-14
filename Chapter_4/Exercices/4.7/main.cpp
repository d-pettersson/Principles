#include <iostream>
#include <string>
#include <vector>

using namespace std;

int convertStrNum(const string &strNum) {

    vector<string> numbersAlpha = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> numbersDigit = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    // convert input string to integer
    for (int i = 0; i < numbersAlpha.size(); ++i) {
        if (strNum == numbersAlpha[i])
            return i;
        else if (strNum == numbersDigit[i])
            return i;
        else {
            cerr << "Invalid number";
            break;
        }
    }
    return 0;
}

int main() {

    char operand = ' ';
    string valStr1 = " ";
    string valStr2 = " ";
    int val1 = 0;
    int val2 = 0;

    cout << "Please input your numbers and an operand: ";
    cin >> valStr1 >> valStr2 >> operand;

    val1 = convertStrNum(valStr1);
    val2 = convertStrNum(valStr2);

    switch(operand) {
        case '+':
            cout << "The sum of " << val1 << " and " << val2 << " is equal to " << val1 + val2;
            break;
        case '-':
            cout << "The difference between " << val1 << " and " << val2 << " is equal to " << val1 - val2;
            break;
        case '*':
            cout << "The multiplication of " << val1 << " and " << val2 << " is equal to " << val1 * val2;
            break;
        case '/':
            cout << "The divide of " << val1 << " and " << val2 << " is equal to " << val1 / val2;
            break;
        default:
            cout << "No clue what this is supposed to be..";
            break;
    }

}