/*
a
b b
c c c
d d d d
e e e e e
f f f f f f
*/

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 6; row = row + 1)
    {
        for (int col = 1; col <= row; col++)
        {
            char ch = 'a' + row - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}