// Print Sum of cube of first n natural number
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        sum = sum + i*i*i;
    }
    cout<<sum;
    return 0;
}