// print all the capital and small letters using a while loop. It means A-Z,then a-z.

#include <iostream>
using namespace std;
int main()
{

    // First Print A-Z (capital letters)
    char a = 'A';
    while (a <= 'Z')
    {
        cout << a << " ";
        a++;
    }

    cout<<endl;

    // Print a-z (small leters)
    char ch = 'a';
    while (ch <= 'z')
    {
        cout << ch << " ";
        ch++;
    }
}