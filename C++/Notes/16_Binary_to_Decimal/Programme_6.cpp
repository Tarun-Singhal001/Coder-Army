#include <iostream>
using namespace std;
int main()
{
    // Programme to convert Octal to Binary.

    // Convert Octal to Decimal.
    int num;
    int ans = 0, rem, mul = 1;
    cout << "Enter a Octal Number: ";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        ans = rem * mul + ans;
        mul *= 8;
    }

    // Convert Decimal to Binary.
    int num_2 = ans;
    int ans_2 = 0, rem_2, mul_2 = 1;

    while (num_2 > 0)
    {
        rem_2 = num_2 % 2;
        num_2 /= 2;
        ans_2 = rem_2 * mul_2 + ans_2;
        mul_2 *= 10;
    }
    cout << ans_2;
}