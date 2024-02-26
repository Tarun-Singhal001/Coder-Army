#include <iostream>
using namespace std;
int main()
{
    // Find A year if it is a Leap Year or Non-leap Year.
    int year;
    cout << "Enter the Year: ";
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "It is a Leap Year";
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "It is a Leap Year";
    }
    else
    {
        cout << "It's not a Leap Year";
    }
}