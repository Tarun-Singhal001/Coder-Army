#include <iostream>
using namespace std;
int main()
{
    // take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print No.

    int a, b, c;
    cout << "Enter number a,b,c: ";
    cin >> a >> b >> c;

    if (a > b || a > c)
    {
        cout << a << " is greater than " << b << " or " << c;
    }
    else
    {
        cout << "No";
    }
}