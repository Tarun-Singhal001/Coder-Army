/*

Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

*/
#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=7;row++){
        for(int space=1;space<=8-row;space++){

            cout<<"  ";
        }
        for(int col=1;col<=2*row-1;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}