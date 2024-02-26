#include <iostream>
using namespace std;
int main()
{
    // Write a programme to convert Decimal number to Binary using a for Loop

    int num, num1;
    int rem, mul = 1, ans = 0;
    cout << "Enter a Decimal Number: ";
    cin >> num;
    num1 = num;
    for (num; num > 0; num /= 2)
    {
        rem = num % 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << "Binary no of " << num1 << " is " << ans;
}