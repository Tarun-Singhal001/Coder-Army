#include<iostream>
using namespace std;
int main()
{
    // Find sum of squares of first n natural numbers.
    int i,sum,n;
    cout<<"Enter the Last Number: ";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
        cout<<sum<<",";
    }
    cout<<"Sum of square of "<<n<<" is :"<<sum;
}