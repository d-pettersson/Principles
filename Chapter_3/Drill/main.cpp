#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Enter the name of the person you want to write to ";
    string firstName;
    cin >> firstName;

    cout << "Enter the name of a friend ";
    string friendsName;
    cin >> friendsName;

    cout << "Is your friend male or female? answer with either m or f ";
    char friendSex = 0;
    cin >> friendSex;

    cout << "Please tell me your age ";
    int age;
    cin >> age;


    cout << "\n\nDear " << firstName << ",\n"
        << "How are you? I am fine. I miss you.\n"
        << "I don't know what I'm supposed to write here.\n"
        << "But I will still do it. \n"
        << "Have you seen " << friendsName << " lately?\n";

    if (friendSex == 'm')
        cout << "If you see " << friendsName << " please ask him to call me.\n";

    if (friendSex == 'f')
        cout << "If you see " << friendsName << " please ask her to call me.\n";

    cout << "I hear you just had a birthday and you are " << age << " years old\n";

    if (age <= 0 || age > 110)
        cerr << "You're kidding!";

    if (age < 12)
        cout << "Next year you will be " << age + 1 << '\n';

    if (age == 17)
        cout << "Next year you will be able to vote\n";

    if (age > 70)
        cout << "I hope you're enjoying retirement\n";

    cout << "Yours sincerely,\n\n" << firstName;


    return 0;
}