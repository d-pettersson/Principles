#include <iostream>

using namespace std;

int main() {

    int val1,
        val2;

    cout << "Please input first number: ";
    cin >> val1;

    cout << "Please input second number: ";
    cin >> val2;

    if (val1 > val2)
        cout << "this is the smaller: " << val2 << '\n'
            << "this is the larger: " << val1 << '\n';
    else
        cout << "this is the smaller: " << val1 << '\n'
            << "this is the larger: " << val2 << '\n';

    cout << "this is the sum: " << val1 + val2 << '\n'
        << "this is the difference: " << val1 - val2 << '\n'
        << "this is the product: " << val1 * val2 << '\n'
        << "this the ratio: " << val1 << ':' << val2;

    return 0;


}