#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<string> names;
    vector<string> unsortedNames;
    vector<string> ages;

    cout << "Please type in a name and an age: ";

    // push to vector names and ages at the same time
    for (string name, age; cin >> name >> age;) {

        if (name == "NoName" && age == "0")
            break;

        names.push_back(name);
        ages.push_back(age);
    }

    // copy vector to another vector to keep original
    unsortedNames = names;

    // sort original vector
    sort(names.begin(), names.end());

    // check for duplicates and output each vector
    for (int i = 0; i < names.size(); ++i) {

        if (names[i] == names[i-1]) {
            cerr << "Duplicate names are not valid\n";
            continue;
        }

        cout << unsortedNames[i] << " ";
        cout << ages[i] << " \n";
    }


}