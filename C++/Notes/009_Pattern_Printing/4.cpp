/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= row - 1; space++)
        {
            cout << "  ";
        }
        for (int col = 2 * (n - row) + 1; col >= 1; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}