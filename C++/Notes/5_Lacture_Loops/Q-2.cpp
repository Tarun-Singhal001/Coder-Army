#include <iostream>
using namespace std;
int main()
{
    // Print ASCII Value of character from 'A' to 'Z' with the help of for Loop.
    char ch;
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        int a = ch;
        cout << a << " ";
    }
    return 0;
}