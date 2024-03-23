#include<iostream>
using namespace std;
int main(){
    // Write a program to convert Octal numbers to decimal numbers.

    int num,rem,ans= 0,mul =1;
    for(num = 21;num>0;num= num /10){
        rem = num%10;
        ans = rem*mul+ ans ;
        mul = mul*8;
    }
    cout<<ans;
}