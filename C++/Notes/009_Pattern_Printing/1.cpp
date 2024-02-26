/*
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 * * * * * * *
 * * * * * * * *
 * * * * * * * * *
 */

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 9; row = row + 1)
    {
        for (int col = 1; col <= row; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}