#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter an integer: ";
    cin >> x;
    int rem1, rem2;
    rem1 =x%5;
    rem2= x%3;
    if(rem1==0 &&  rem2==0)
    {
        cout<<x<<" is divisible by both 5 and 3";
    }
    else if(rem1==0)
    {
        cout<<x<<" is divisible by 5";
    }
    else if(rem2==0)
    {
        cout<<x<<" is divisible by 3";
    }
    else
    {
        cout<<x<<" is not divisible by either 5 or 3";
    }
} 