#include <iostream>
#include <string>

using namespace std;

int main() {

    string operand;
    double val1, val2;

    cout << "Please input an operand and two numbers: ";
    cin >> operand >> val1 >> val2;

    if (operand == "+" || operand == "plus")
        cout << val1 + val2;
    else if (operand == "-" || operand == "minus")
        cout << val1 - val2;
    else if (operand == "*" || operand == "mul")
        cout << val1 * val2;
    else if (operand == "/" || operand == "div")
        cout << val1 / val2;

}