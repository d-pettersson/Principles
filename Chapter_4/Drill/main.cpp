#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // define conversion constants
    constexpr double CM_TO_M = 0.01;
    constexpr double IN_TO_M = 0.0254;
    constexpr double FT_TO_M = 0.3048;

    double val = 0;
    double sum = 0;
    double smallest = 0;
    double largest = 0;
    int count = 0;
    string unit;
    bool firstPass = true;
    vector<double> inputs;

    cout << "Please enter the distances you want to convert (in, ft, cm, m): ";

    while (cin >> val >> unit) {

        // convert inputs to meters
        if (unit == "cm") {
            val *= CM_TO_M;
        }

        else if (unit == "in") {
            val *= IN_TO_M;
        }

        else if (unit == "ft") {
            val *= FT_TO_M;
        }

        else if (unit == "m") {
            val = val;
        }

        else {
            cout << "Invalid unit\n";
        }

        // determine smallest and largest val
        if (val < smallest || firstPass) {
            smallest = val;
        }

        else if (val > largest) {
            largest = val;
        }

        // put everything in the vector
        inputs.push_back(val);

        // sum up values
        sum += val;

        // switch boolean firstPass
        firstPass = false;


    }

    cout << "This is the smallest number: " << smallest << '\n'
        << "This is the largest number: " << largest << '\n'
        << "This is the amount of numbers input: " << inputs.size() << '\n'
        << "This is the sum of the numbers: " << sum << " meters.\n"
        << "These are the numbers you typed in (in meters): ";

    // sorting and outputting numbers from vector
    sort(inputs.begin(), inputs.end());
    for (double i : inputs) {
        cout << i << ' ';
    }


}