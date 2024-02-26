#include<iostream>
using namespace std;
int main()
{
    // Find the Sum of the number in the number and Give answer in one Digit.
    int num;
    int sum,rem;
    num = 999;
    sum = num;
    while(num>=10)
    {
        sum=0;
        while(num>0)
        {
            rem=num%10;
            num= num/10;
            sum = sum+rem;
        }
        num = sum;
    }
    cout<<sum;
}