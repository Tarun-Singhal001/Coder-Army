/*
            *
          * *
        * * *
      * * * *
    * * * * *
  * * * * * *
* * * * * * *

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int row = 1; row <= n; row = row + 1)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}