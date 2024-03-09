// Give a number n, find if it is prime or not, use a while loop and break here to solve it.

#include <iostream>
using namespace std;
int main()
{
    int n, i = 2;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << "It's not a Prime";
            break;
        }
        else
        {
            cout << "Prime";
            break;
        }
        i++;
    }
}