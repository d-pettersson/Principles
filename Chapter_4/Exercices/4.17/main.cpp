#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<string> vecStr = {};
    string mode = " ";
    string min = " ";
    string max = " ";

    cout << "Please type in a couple of strings to test (and done to finish the input): ";
    for (string words; cin >> words;) {
        if (words == "done")
            break;
        vecStr.push_back(words);
    }

    sort(vecStr.begin(), vecStr.end());

    for (int i = 0; i < vecStr.size(); ++i) {

        if (vecStr[i].length() > vecStr[i-1].length())
            max = vecStr[i];

        // if (vecStr[i].length() < vecStr[i-1].length())
        //  min = vecStr[i]; // not working

        if (vecStr[i] == vecStr[i-1]) {
            mode = vecStr[i];
        }


    }

    cout << "Min: " << min << " Max: " << max << " Mode: " << mode << " ";

}


