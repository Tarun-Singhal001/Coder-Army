#include <iostream>
using namespace std;
int main()
{
    // Programme to convert Octal Number to Decimal Number System.

    int num;
    int ans = 0, mul = 1, rem;
    cout << "Enter Octal Number: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        ans = rem * mul + ans;
        mul *= 8;
    }
    cout << ans;
}