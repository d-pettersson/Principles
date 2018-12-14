#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<double> temps;
    double sum = 0;
    double median = 0;

    cout << "Please input a couple of temps: \n";

    for (double temp; cin >> temp;)
        temps.push_back(temp);

    // compute median temp for even size in vector
    sort(temps.begin(), temps.end());
    if (temps.size() % 2 == 0) {
        median = (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2;
        cout << "This is your median temperature: " << median;
    }

    // computer median temp for odd size in vector
    else {
        median = temps[temps.size() / 2];
        cout << "This is your median temperature: " << median;
    }

    return 0;

}