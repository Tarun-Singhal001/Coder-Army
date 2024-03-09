#include<iostream>
using namespace std;
int main(){
    // No from 1 to 10 using while loop
    int i=1;
    while(i<=10){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    // Table of a number using while loop
    int j=1;
    while(j<=10){
        cout<<5<<" x "<<j<<" = "<<5*j<<endl;
        j++;
    }
    // Prints factor of a number using while loop

    int val = 10;
    int k=1;
    while(k<=val){
        if(val%k==0){
            cout<<k<<"  ";
        }
        k++;
    }
    cout<<endl;
    // Print sum of N natural number using do-while loop
    int sum=0, m = 1, num = 10;
    do{
        sum = sum +m;
        m++;
    }
    while(m <=num);
    cout<<sum<<endl;

    // Break statement
    int n=1;
    while(n<=10){
        if(n==8){
            break;
        }
        cout<<n<<" ";
        n++;
    }
    cout<<endl;
    // Continue statement
    int z = 1;
    while(z<=10){
        cout<<z<<" ";
        z++;
        if(z==4){
        continue; 
        }
    }
}