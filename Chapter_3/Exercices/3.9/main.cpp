#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Please write a number with letters: ";
    string number;
    cin >> number;

    if (number == "zero")
        cout << "0";
    else if (number == "one")
        cout << "1";
    else if (number == "two")
        cout << "2";
    else if (number == "three")
        cout << "3";
    else if (number == "four")
        cout << "4";
    else
        cout << "Not a number that I know of.";
}