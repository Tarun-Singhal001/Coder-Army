/*
F G H I J K
F G H I J K
F G H I J K
F G H I J K
F G H I J K
*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int i = 1; i <= 6; i++)
        {
            char ch = 'F' + i - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}