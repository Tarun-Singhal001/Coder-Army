#include <iostream>
using namespace std;
int main()
{
    int n, pow, i, Num;
    cout << "Enter the Base: ";
    cin >> n;
    cout << "Enter the Power: ";
    cin >> pow;

    Num= 1;
    for (i = 1; i <= pow; i++)
    {
        Num = Num * n;
    }
    cout << Num;
}