/*
Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
           1
         2 1
       3 2 1
     4 3 2 1
   5 4 3 2 1  
*/

#include<iostream>
using namespace std;
int main(){
    for(int row =1;row<=5;row++){
        for(int space=1;space<=5-row;space++){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            cout<<row-col+1<<" ";
        }
        cout<<endl;
    }
}