/*

      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *

*/

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 6; row++)
    {
        for(int space=1;space<=6-row;space++){
            cout<<" ";
        }

        for (int col = 1; col <= row; col++)
        {
            cout <<"* ";
        }
        cout << endl;
    }
    for(int row =1;row<= 5;row++){
        for(int space=1;space<=row;space++){
            cout<<" ";
        }
        for(int col=1;col<=6-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

}