#include<iostream>
using namespace std;
int main()
{
    int a,N,l;
    cout<<"Give me a Number: ";
    cin>>N;
    for(a=1;a<=10;a++)
    {
        cout<<N<<"*"<<a<<"="<<a*N<<endl;
    }
}