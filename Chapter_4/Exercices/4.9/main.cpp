#include <iostream>
#include <string>
#include <math.h>

using namespace std;

bool isPrime(int number) {

    if (number < 2 || (number % 2 == 0 && number != 2))
        return false;

    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main() {

    int numIn;
    string result = " ";

    cout << "Please input the number you want to test: ";
    cin >> numIn;

    // is input number prime?
    result = isPrime(numIn) ? " is prime" : " is not prime";
    cout << numIn << result << '\n';

    // list all prime numbers between 0 and input number
    cout << "These are the prime numbers between 0 and " << numIn << '\n';
    for (int i = 0; i < numIn ; ++i) {
        if (isPrime(i))
            cout << i << " ";
    }

}