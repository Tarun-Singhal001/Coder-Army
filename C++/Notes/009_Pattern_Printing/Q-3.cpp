/*
Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
         A
       A B A
     A B C B A
   A B C D C B A
 A B C D E D C B A

*/
#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=7;row++){
        for(int space=1;space<=7-row;space++){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            char ch = 'A'+col-1;
            cout<<ch<<" ";
        }
        for(int col1=1;col1<row;col1++){
            char ch ='A' + row-col1-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}