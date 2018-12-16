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
    int count = 0;

    cout << "Please input the amount of prime numbers you want to generate: ";
    cin >> numIn;

    for (int i = 1; i >= 1; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
            ++count;
        }

        if (count >= numIn)
            break;
    }
}