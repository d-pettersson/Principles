#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<double> distances;
    double smallest = 0;
    double largest = 0;
    double sum = 0;
    double mean = 0;
    bool firstPass = true;

    // put the distance into the vector
    cout << "Please input some distances between cities: ";
    for (double distance; cin >> distance;)
        distances.push_back(distance);

    // iterate on each element of the vector
    for (double i : distances) {
        if (i < smallest || firstPass)
            smallest = i;
        else if (i > largest)
            largest = i;

        sum += i;

        mean = sum / distances.size();

        firstPass = false;
    }

    // output results
    cout << "This is the smallest distance: " << smallest << '\n'
        << "This is the largest distance: " << largest << '\n'
        << "This is the sum of distances: " << sum << '\n'
        << "This is the mean distance: " << mean << '\n';
 }


