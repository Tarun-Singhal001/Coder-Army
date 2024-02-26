#include <iostream>
using namespace std;
int main()
{
    int current=0, previous=1, last=0, num, i;
    cout << "Give me a Number: ";
    cin >> num;
    for (i = 1; i <= num; ++i)
    {
        if (i == 1)
        {
            cout << 0 << " ";
            continue;
        }
        if (i == 2)
        {
            cout << 1 << " ";
            continue;
        }
        current = previous + last;
        last = previous;
        previous = current;

        cout << current << " ";
    }
    return 0;
}