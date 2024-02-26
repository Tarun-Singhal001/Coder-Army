#include <iostream>
using namespace std;
int main()
{
    // Programme to convert Binary no. to Octal No.

    // Converting Binary to Decimal.
    int num;
    int ans = 0, mul = 1, rem;
    cout << "Enter a Binary Number: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }

    // Now Converting Decimal to Octal.
    int num_2 = ans;
    int ans_2 = 0, rem_2, mul_2 = 1;

    while (num_2 > 0)
    {
        rem_2 = num_2 % 8;
        num_2 /= 8;
        ans_2 = rem_2 * mul_2 + ans_2;
        mul_2 *= 10;
    }
    cout << ans_2;
}