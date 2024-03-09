// Take a number n from the user and print all the numbers between 1 and n (inclusive). Do this using while and do while loop separately.

#include <iostream>
using namespace std;
int main()
{
    //  Programme using do while Loop.

    int n;
    int i = 1;
    cout << "Enter a number: ";
    cin >> n;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);

    cout<<"\n";

    // Programme using while Loop.

    int a = 1;
    while (a <= n)
    {
        cout << a << " ";
        a++;
    }
}
