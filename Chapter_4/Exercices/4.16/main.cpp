#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {

    vector<int> inputNum;
    int count = 0;
    int max = 0;
    int mode = 0;

    // fill up vector with ints
    cout << "Please type in a suite of ints: ";
    for (int num; cin >> num;)
        inputNum.push_back(num);

    // sort it and count the occurences
    sort(inputNum.begin(), inputNum.end());

    for (int i = 1; i < inputNum.size(); ++i) {

        if (inputNum[i - 1] == inputNum[i])
            count++;
        if (count > max) {
            max = count;
            mode = inputNum[i];
        }



    }

    cout << "This is the mode: " << mode;
    return 0;

}