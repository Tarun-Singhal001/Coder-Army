/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
*/

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 7; row = row + 1)
    {
        for (int col = 1; col <= row; col = col + 1)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}