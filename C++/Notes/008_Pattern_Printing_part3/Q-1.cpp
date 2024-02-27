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