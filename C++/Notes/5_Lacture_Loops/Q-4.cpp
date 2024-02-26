#include <iostream>
using namespace std;
int main()
{
    // There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
    int a, d, i, l;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Last Number: ";
    cin >> l;
    cout << "Enter the Common Difference: ";
    cin >> d;
    for (i = a; i <= l; i = i + d)
    {
        cout << i << " ";
    }
    return 0;
}