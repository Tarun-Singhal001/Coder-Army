#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 2)
    {
        cout << "Not-Prime";
        return 0;
    }
    else
    {
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                cout << "Not-Prime";
                return 0;
            }
            else
            {
                cout << "Prime";
                return 0;
            }
        }
    }
}