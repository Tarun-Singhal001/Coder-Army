/*
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/

#include <iostream>
using namespace std;
int main()
{
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            char ch = 'a' + i - 1;
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl;
    // alternate mathod

    for (int j = 1; j <= 5; j++)
    {
        for (char i = 'a'; i <= 'e'; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}