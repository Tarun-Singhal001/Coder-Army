/*
* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *

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
        for (int col = n + 1 - row; col >= 1; col--)
        {
            cout << "* ";
        }
        for (int space = 1; space <= row - 1; space++)
        {
            cout << "    ";
        }
        for (int col = n + 1 - row; col >= 1; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = n; row >= 1; row--)
    {
        for (int col = n + 1 - row; col >= 1; col--)
        {
            cout << "* ";
        }
        for (int space = 1; space <= row - 1; space++)
        {
            cout << "    ";
        }
        for (int col = n + 1 - row; col >= 1; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}