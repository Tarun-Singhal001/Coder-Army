#include <iostream>
using namespace std;
int main()
{
    // Programme to convert Decimal Number to Octal Numbers.
    int num;
    int ans = 0, rem, mul = 1;
    cout << "Enter Decimal Number: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 8;
        num = num / 8;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << ans;
}