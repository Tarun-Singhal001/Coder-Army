/*
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 */

#include <iostream>
using namespace std;
int main()
{
    for (int row = 6; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    // Alternate Method

    for (int row = 1; row <= 6; row++)
    {
        for (int col = 1; col <= 6 - row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}