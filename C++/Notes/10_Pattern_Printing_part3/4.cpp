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
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            char ch = 'A' + col - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}