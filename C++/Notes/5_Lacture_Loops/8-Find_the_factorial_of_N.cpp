#include<iostream>
using namespace std;
int main()
{
    int f,i,ans;
    cout<<"Enter number N: ";
    cin>>f;
    ans= 1;
    for(i=1;i<=f;i++)
    {
        ans=ans*i;
    }
    cout<<ans;
}