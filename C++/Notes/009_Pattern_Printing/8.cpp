/*
6
6 5
6 5 4
6 5 4 3
6 5 4 3 2
6 5 4 3 2 1
*/

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 6; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << 7 - col << " ";
        }
        cout << endl;
    }

    cout<<endl;
    // Alternate Method

    for(int row=6;row>=1;row--)
    {
        for(int col=6;col>=row;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}