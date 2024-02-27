/*
Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


        A
      B B
    C C C
  D D D D
E E E E E
*/

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 6; row++)
    {
        for (int space = 1; space <= 6 - row; space++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}