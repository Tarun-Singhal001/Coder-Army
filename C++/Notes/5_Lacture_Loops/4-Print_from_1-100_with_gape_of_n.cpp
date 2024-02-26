#include <iostream>
using namespace std;
int main()
{
    int a, d, l;
    cout << "Give me the last Number: ";
    cin >> l;
    cout << "Give me the Difference: ";
    cin >> d;
    for (a = 0; a <= l; a = a + d)
    {
        cout << a << " ";
    }
}