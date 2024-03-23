#include<iostream>
using namespace std;
void Swap(int &a, int &b) {
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<" "<<b<<endl;
}
int main(){
    // Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. 
    int a = 10, b = 20;
    Swap(a,b);

}