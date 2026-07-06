#include<iostream>
using namespace std;
int main()
{
    cout<< "Enter a number" <<endl;
    int num;
    cin>>num;
    int Absolutevalue= (num<0)? -num:num;
    cout<< "The absolute value is: " << Absolutevalue;
}