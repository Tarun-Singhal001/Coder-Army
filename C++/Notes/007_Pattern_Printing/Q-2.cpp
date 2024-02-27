/*
    A
    A B
    A B C
    A B C D
    A B C D E
    A B C D E F
*/
#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 6; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            char ch = 'A' + col - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}
