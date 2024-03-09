#include <iostream>
using namespace std;
int main()
{
    // Temperature Range: write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90(Excluded) degrees Fahrenheit print yes, else No.

    int temp;
    cout << "Enter the Temperature of water(in f): ";
    cin >> temp;
    if (temp > 70 && temp < 90)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}