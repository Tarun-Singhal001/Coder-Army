#include<iostream>
using namespace std;

void Swap(int a, int b, int c){
    int temp = a;
    a = c;
    c = b;
    b = temp;
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main(){
    //  There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
    int a =10, b = 20, c = 30;
    Swap(a,b,c);
}