#include<iostream>
using namespace std;
int main(){
    // Write a program to convert octal numbers to binary numbers.

    int num = 60,rem,mul = 1,ans=0;
    // Step :1 Convert octal numbers to Binary number
    for(;num>0;num=num/10){
        rem = num%10;
        ans = rem*mul +ans;
        mul = mul*8;
    }
    cout<<ans<<endl;

    // Step: 2 Convert Decimal number to Binary number
    num = ans,mul =1,ans=0;
    for(;num>0;num = num/2){
        rem = num%2;
        ans = rem*mul +ans;
        mul = mul*10;
    }
    cout<<ans;
}