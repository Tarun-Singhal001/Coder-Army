#include <iostream>
using namespace std;
int main()
{
    // Write a programme to convert Decimal number to Binary using a for Loop

















    // Using While loop
    int num = 1111;
    int ans = 0,rem, mul = 1;
    while(num>0){
        rem = num%10;
        num = num/10;
        ans = rem *mul + ans;
        mul = mul *2;
    }
    cout<<ans<<endl;


    // Using For loop
    num = 1111;
    ans = 0,rem, mul = 1;
    for(;num>0;num=num/10){
        rem = num%10;
        ans = rem*mul + ans;
        mul = mul*2;
    }
    cout<<ans;
}