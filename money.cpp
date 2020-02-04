// read quarters and dimes and computer toCurrency

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare variables
    int hundreds, tens, fives, ones, quarters, dimes, nickels, pennies;
    double change, floatFmt, change1;
    string checkFmt;



    // read input
    cout << "Enter the amount of change:" << endl;
    cin >> change;

    change1 = change;
    floatFmt = change;
    hundreds = floatFmt/100;
    hundreds = hundreds%100;
    tens = floatFmt/10;
    tens = tens%10;
    fives = floatFmt/5;
    fives = fives%5;
    ones = floatFmt/1;
    ones = ones%1;

    change = change*100;
    quarters = change/25;
    quarters = quarters%25;
    dimes = change/10;
    dimes = dimes%10;
    nickels = change/5;
    nickels = nickels%5;
    pennies = change/1;
    pennies = pennies%1;

    checkFmt = change1;


    // do the math

    // output the results
    cout << "change format - " << hundreds << " " << tens << " " << fives << " " << ones << " " << quarters << " "
    << dimes << " " << nickels << " " << pennies<< endl;
    cout << "dollar format - " << "$" << change1 << endl;
    cout << "float format - " << floatFmt << endl;
    cout << "check format - " << checkFmt << endl;

    return 0; // no errors
}
