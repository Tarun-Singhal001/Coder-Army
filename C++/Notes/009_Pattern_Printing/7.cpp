/*
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 6; row++)
    {
        for (int col = 1; col <= 6 - row + 1; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    // Alternative Method
    cout << endl;

    for (int row = 6; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}