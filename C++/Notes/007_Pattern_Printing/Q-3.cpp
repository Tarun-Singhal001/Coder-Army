/*
    10
    10 11
    10 11 12
    10 11 12 13
    10 11 12 13 14
    10 11 12 13 14 15

*/
#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=6;row++){
        for(int col=1;col<=row;col++){
            cout<<9+col<<" ";
        }
        cout<<endl;
    }
}