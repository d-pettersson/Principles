#include <iostream>

double ctok(double c) {

    double k = c + 273.15;
    if (c < 273.15) std::cerr << "Wrong input value: temperature too low.\n";
    return k;
}

int main() {

    double c = 0;
    std::cin >> c;
    double k = ctok(c);
    std::cout << k << '\n';

}