#include<iostream>
using namespace std;
int main(){
    //  Write a program to convert binary to Octal number 

    int num = 110000,rem,mul= 1,ans=0;

    // Step 1: Convert binary to decimal
    for(;num>0;num = num/10){
        rem = num%10;
        ans = rem*mul + ans;
        mul = mul*2;
    }
    cout<<ans<<endl;

    num = ans, mul = 1,ans= 0;
    // Step 2: Convert Decimal Number to Octal Number
    for(;num>0;num= num/8){
        rem = num%8;
        ans = rem*mul + ans;
        mul = mul*10;
    }
    cout<<ans;
}