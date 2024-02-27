/*

      A B C D
      A B C
      A B
      A
*/
#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=6;row++){
        for(int col=1;col<=7-row;col++){
            char ch = 'A'+col-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}