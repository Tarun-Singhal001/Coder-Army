/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 6; row = row + 1)
    {
        for (int col = 1; col <= row; col = col + 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}