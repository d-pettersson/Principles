#include <iostream>
#include <math.h>
#include <tuple>

std::tuple<double, double> quadSolve(double a, double b, double c) {

    // check that realRoots is positive

    double realRoots = pow(b, 2) - (4 * a * c);

    if (realRoots < 0) std::cerr << "Error\n";

    double posResult = (-b + sqrt(realRoots)) / (2 * a);
    double negResult = (-b - sqrt(realRoots)) / (2 * a);

    return std::make_tuple(posResult, negResult);

}

int main() {

    std::cout << "Please type in: a, b, c\n";

    double a, b, c;
    std::cin >> a >> b >> c;

    // put the result in auto type
    auto result = quadSolve(a, b, c);

    std::cout << "This is the first result: " << std::get<0>(result)
            << " and this is the second result: " << std::get<1>(result);

}

