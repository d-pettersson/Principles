#include <iostream>

double ftoc(double f) {

    // assuming and checking that c is not under absolute temp (-273.15)
    // convert fahrenheit to celsius

    double c = (f - 32) * 5/9;
    if (c < -273.15) std::cerr << "Celsius temperature too low.";
    return c;
}

double ctof(double c) {

    // assuming and checking that c is not under absolute temp (-273.15)
    // convert celsius to fahrenheit

    double f = 9.0 / 5 * c + 32;
    if (c < -273.15) std::cerr << "Celsius temperature too low.";
    return f;
}


int main() {

    // choice of conversion type
    std::cout << "1: Conversion from Fahrenheit to Celsius\n" << "2: Conversion from Celsius to Fahrenheit\n";
    int choice;
    std::cin >> choice;

    // temp input
    std::cout << "Please type in the temperature you want to convert\n";
    double temp;
    std::cin >> temp;

    switch(choice) {
        case(1): {
            std::cout << ftoc(temp) << "˚C";
            break;
        }
        case(2): {
            std::cout << ctof(temp) << "˚F";
            break;
        }
        default: {
            std::cout << "Wrong input";
            break;
        }

    }


}