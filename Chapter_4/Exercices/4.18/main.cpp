#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double a, b, c, result1, result2;

    cout << "Please input a: ";
    cin >> a;
    cout << "Please input b: ";
    cin >> b;
    cout << "Please input c: ";
    cin >> c;

    // quadratic formula solving
    result1 = (- b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    result2 = (- b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    cout << "The results will be: " << result1 << " and " << result2;

}