#include <iostream>
#include <string>

using namespace std;

int main() {

    char operand;
    double val1 = 0;
    double val2 = 0;
    double result = 0;

    cout << "Please enter two numbers and an operand: ";
    cin >> val1 >> val2 >> operand;

    switch(operand) {
        case '+':
            result = val1 + val2;
            cout << "The sum of " << val1 << " and " << val2 << " is " << result;
            break;
        case '-':
            result = val1 - val2;
            cout << "The difference of " << val1 << " and " << val2 << " is " << result;
            break;
        case '*':
            result = val1 * val2;
            cout << "The multiplication of " << val1 << " and " << val2 << " is " << result;
            break;
        case '/':
            result = val1 / val2;
            cout << "The divide of " << val1 << " by " << val2 << " is " << result;
            break;
        default:
            cout << "Operation invalid";
    }

    return 0;
}