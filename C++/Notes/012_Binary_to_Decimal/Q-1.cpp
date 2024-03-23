#include<iostream>
using namespace std;
int main(){
    // Write a program to convert binary numbers to decimal numbers using a for loop.

    // Using For loop
    int num  = 16;
    int ans = 0 , rem, mul = 1;
    for(;num>0;num=num/2){
        rem = num%2;
        ans = rem*mul + ans;
        mul = mul*10;
    }
    cout<<ans<<endl;


    // Using while Loop
    num  = 16;
    ans = 0 , mul = 1;

    while(num>0){
        rem = num%2;
        num = num/2;
        ans = rem*mul + ans;
        mul = mul*10;
    }
    cout<<ans;

}