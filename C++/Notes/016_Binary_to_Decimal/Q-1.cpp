#include <iostream>
using namespace std;
int main()
{
    // Write a programme to convert binary numbers to decimal numbers using a for loop.

    int num,num1;
    int rem, ans = 0, mul = 1;
    cout << "Enter a binary Number: ";
    cin >> num;
    num1=num;
    for (num; num > 0; num = num / 10)
    {
        rem = num % 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << "Decimal Number Of "<<num1<<" is "<<ans;
}