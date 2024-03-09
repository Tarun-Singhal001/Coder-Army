#include<iostream>
using namespace std;
int main(){
    /*
    5: What will be the result below according to the precedence table.

    2*3-48==5/4*6
    6<<2-4*8/2
    5>4<3/2-8%4+5
    14-8+92>>2+70
    */


   cout<<(2*3-48==5/4*6)<<endl;  // ans== 1
   cout<<(6<<2-4*8/2)<<endl;     // ans== 0
   cout<<(5>4<3/2-8%4+5)<<endl;  // ans== 1
   cout<<(14-8+92>>2+70)<<endl;  // ans== -10
}
// In terminal it shows some errors and wrong answers because it does it differently but correct answers are shown above in all manner.