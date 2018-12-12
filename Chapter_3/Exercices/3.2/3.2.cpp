#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Please enter a number of miles that should be converted into kilometers: ";
    double miles;
    cin >> miles;
    cout << "Here's the conversion: " << miles << " miles = " << miles * 1.609 << " kilometers";



    return 0;
}