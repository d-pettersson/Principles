#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Please input three strings: ";
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1 == s3)
        cout << s3 << ", " << s1 << ", " << s2;

    else
        cout << s3 << ", " << s2 << ", " << s1;

}