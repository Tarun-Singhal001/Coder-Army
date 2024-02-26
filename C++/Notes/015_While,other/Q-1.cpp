// Take a number n from the user and print all the numbers between 1 and n (inclusibe). Do this using while and do while loop separaterly.

#include <iostream>
using namespace std;
int main()
{
    //  Programe using do while Loop.

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

    // Programe using while Loop.

    int a = 1;
    while (a <= n)
    {
        cout << a << " ";
        a++;
    }
}
