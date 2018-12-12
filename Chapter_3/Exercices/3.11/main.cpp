#include <iostream>

using namespace std;

int main() {

    double pennies, nickels, dimes, quarters, halfDollars, cents, dollars;

    cout << "How many pennies do you have? ";
    cin >> pennies;
    cout << "How many nickels do you have? ";
    cin >> nickels;
    cout << "How many dimes do you have? ";
    cin >> dimes;
    cout << "How many quarters do you have? ";
    cin >> quarters;
    cout << "How many half dollars do you have? ";
    cin >> halfDollars;

    cents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halfDollars * 50);
    dollars = cents / 100;

    if (pennies == 1)
        cout << "\nYou have " << pennies << " penny\n";
    else if (pennies > 1)
        cout << "\nYou have " << pennies << " pennies\n";

    if (nickels == 1)
        cout << "You have " << nickels << " nickel\n";
    else if (pennies > 1)
        cout << "You have " << nickels << " nickels\n";

    if (dimes == 1)
        cout << "You have " << dimes << " dime\n";
    else if (dimes > 1)
        cout << "You have " << dimes << " dimes\n";

    if (quarters == 1)
        cout << "You have " << quarters << " quarter\n";
    else if (quarters > 1)
        cout << "You have " << quarters << " quarters\n";

    if (halfDollars == 1)
        cout << "You have " << halfDollars << " half dollar\n";
    else if (halfDollars > 1)
        cout << "You have " << halfDollars << " half dollars\n";

    if (cents == 1)
        cout << "You have " << cents << " cent\n";
    else if (cents > 1)
        cout << "You have " << cents << " cents\n";


    cout << "\nThe value of all your coins is " << cents << " cents" << " or $" << dollars << '\n';


}