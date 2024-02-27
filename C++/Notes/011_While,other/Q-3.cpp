//  Take a number n from the user and print all the even numbers between 1 and n (inclusive). Do this using while and do while loop separately.

#include <iostream>
using namespace std;
int main()
{
    // Using while loop
    int n, i = 1;
    cout << "Enter a number n: ";
    cin >> n;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }

    cout<<"\n";
    // Using do while Loop.

    int a = 1;
    do
    {
        if (a % 2 == 0)
        {
            cout << a << " ";
        }
        a++;
    } while (a <= n);
}
