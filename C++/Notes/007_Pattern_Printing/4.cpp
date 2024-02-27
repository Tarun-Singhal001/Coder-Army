/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1
*/

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 6; row = row + 1)
    {
        for (int col = row; col >= 1; col = col - 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}