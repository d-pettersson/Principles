#include <iostream>

using namespace std;

int main() {

    cout << "Please input three integer values: ";
    int val1, val2, val3;
    cin >> val1 >> val2 >> val3;

    if (val1 == val3)
        cout << val3 << ", " << val1 << ", " << val2;

    else
        cout << val3 << ", " << val2 << ", " << val1;

}