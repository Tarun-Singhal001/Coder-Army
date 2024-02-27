/*
Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

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
  int n;
  cout << "Enter n: ";
  cin >> n;

  for (int row = 1; row <= n; row++)
  {
    for (int space = 1; space <= n - row; space++)
    {
      cout << "  ";
    }
    for (int col = 5; col >= n - (row - 1); col--)
    {
      cout << col << " ";
    }
    cout << endl;
  }
}