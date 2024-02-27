/*
Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


        E
      E D
    E D C
  E D C B
E D C B A
*/

#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=6;row++){
        for(int space=1;space<=6-row;space++){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            char ch='A'-col+6;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}