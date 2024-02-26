// Find the factorial of a number n using a while loop and do while loop.
#include <iostream>
using namespace std;
int main()
/*
{
    int n;
    int i = 1, fact = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    cout << n << " Factorial = " << fact;
}

*/

{
    int i =1,fact=1;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    do{
        fact= fact*i;
        i++;
    }while(i<=n);
    cout<<n<<" factorial = "<<fact;
}