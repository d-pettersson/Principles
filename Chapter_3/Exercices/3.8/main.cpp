#include <iostream>

using namespace std;

int main() {

    cout << "Please input an integer: ";
    int val1;
    cin >> val1;

    if (val1 % 2 == 0)
        cout << val1 << " is an even number.";

    else
        cout << val1 << " is an odd number.";

}