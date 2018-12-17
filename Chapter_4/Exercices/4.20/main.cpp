#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<string> names;
    vector<string> unsortedNames;
    vector<string> scores;
    char choice = ' ';

    cout << "Please type in a name and an age: ";

    // push to vector names and ages at the same time
    for (string name, score; cin >> name >> score;) {

        if (name == "NoName" && score == "0")
            break;

        names.push_back(name);
        scores.push_back(score);
    }

    cout << "What do you want to do now?"
        << "\n(p)rint list of names and scores?"
        << "\nFind score correspond to (n)ame?"
        << "\nFind names correspond to (s)core?"
        << "\nType your choice: ";

    cin >> choice;

    if (choice == 'p') {
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
            cout << scores[i] << " \n";
        }
    }

    if (choice == 'n') {

        string name;
        cout << "Please type in the name you're looking for: ";
        cin >> name;

        for (int i = 0; i < names.size(); ++i) {
            if (name == names[i])
                cout << names[i] << " has a score of " << scores[i];

        }
    }

    if (choice == 's') {

        string score;
        cout << "Please type in the score and we'll match that with the names: ";
        cin >> score;

        for (int i = 0; i < scores.size(); i++) {
            if (score == scores[i])
                cout << "This score corresponds to " << names[i] << '\n';
        }

    }



}