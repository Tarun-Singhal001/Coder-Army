#include<iostream>
using namespace std;
    // Reverse a number n using Function, Constraints: -5000<=n<=5000
    int reverse(int n){
        int ans = 0,mul=1;
        while(n>0){
            int rem = n%10;
            n = n/10;
            ans = ans*10 + rem;
        }
        return ans;
    }
int main(){
    cout<<reverse(456);
}