// Programme to convert a Decimal Number to Binary Number
#include <iostream>
using namespace std;
int main()
{
    // Inisialising the variables.
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int ans = 0, mul = 1, rem;

    // Initializing the code.
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }

    // This part is for Answer.
    cout << ans;
}