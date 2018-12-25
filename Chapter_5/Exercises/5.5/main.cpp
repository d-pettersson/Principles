#include <iostream>

double ctok(double c) {

    double k = c + 273.15;
    if (c < -273.15) std::cerr << "Wrong input value: celsius temperature too low.\n";
    return k;
}

double ktoc(double k) {

    double c = k - 273.15;
    if (k < 0) std::cerr << "Wrong input value: kelvin temperature too low.\n";
    return c;
}

int main() {

    std::cout << "1: convert from Celsius to Kevin\n" << "2: convert from Kelvin to Celsius\n";
    int choice;
    std::cin >> choice;

    std::cout << "Please type in the temperature to convert: ";
    double temp;
    std::cin >> temp;

    switch(choice) {
        case(1): {
            std::cout << ctok(temp) << " ˚K";
            break;
        }
        case(2): {
            std::cout << ktoc(temp) << " ˚C";
            break;
        }
        default: {
            std::cout << "Wrong input. Must be a double\n";
            break;
        }
    }

}