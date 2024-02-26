// Programme to convert Binary number to Decimal Number.

#include <iostream>
using namespace std;
int main()
{
    // Initialization of variables
    int num;
    cout << "Enter a Binary Number: ";
    cin >> num;
    int ans = 0, mul = 1, rem;

    // Code Part
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    // Answer part.
    cout << ans << endl;
}