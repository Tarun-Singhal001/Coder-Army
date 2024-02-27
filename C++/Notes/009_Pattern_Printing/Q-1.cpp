/*
Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *

*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=7;i++){
        for(int space=1;space<=7-i;space++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}