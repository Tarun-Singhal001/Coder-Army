/*
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e
*/

#include <iostream>
using namespace std;
int main()
{
    for (char j = 'a'; j <= 'e'; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            // char ch = 'a' + j - 1;
            cout << j << " ";
        }
        cout << endl;
    }

    // alternate method
    cout << endl;
    for (int j = 1; j <= 5; j++)
    {
        char ch = 'a' + j - 1;
        for (int i = 1; i <= 5; i++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
