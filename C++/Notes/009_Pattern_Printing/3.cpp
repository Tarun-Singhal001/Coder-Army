/*

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1

*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int space=1;space<=n-row;space++)
        {
            cout<<"  ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        for(int col=row-1;col>=1;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}