#include<iostream>
using namespace std;
int main()
{
    // Write a programme to convert Decimal Number to Octal Numbers.

    int num,rem,ans = 0,mul=1;
    for(num = 17;num>0;num = num/8){
        rem = num%8;
        ans = rem*mul+ans;
        mul = mul*10;
    }
    cout<<ans;
}