#include<iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter a positive integer: ";
cin>>x;
if(x%5==0 || x%3==0)
cout<<"YES " <<x<<" is divisible by either 5 or 3"<<endl;
else
cout<<"NO " << x<<" is not divisible by either 5 or 3"<<endl;
}