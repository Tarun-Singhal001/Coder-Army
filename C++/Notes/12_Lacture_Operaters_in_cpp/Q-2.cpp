#include <iostream>
using namespace std;
int main()
{
    //  Even and Positive numbers: Write a program that prints "Yes" if a given number is both even and positive, otherwise it will print "No".

    int num;
    cout << "Enter a number n: ";
    cin >> num;

    if (num >= 0 && num % 2 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}