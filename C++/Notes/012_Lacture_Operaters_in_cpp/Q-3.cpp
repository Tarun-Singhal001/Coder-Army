#include <iostream>
using namespace std;
int main()
{
    // Age check: Implement a program that checks if a persom is a teemager. A teenager is someone whose age is berween 13 and 19(inclusive).

    int Age;
    cout << "Enter Your age: ";
    cin >> Age;

    if (Age > 13 && Age <= 19)
    {
        cout << "You are a teenager";
    }
    else if (Age < 13)
    {
        cout << "You are too young ";
    }
    else
    {
        cout << "you are elder";
    }
}