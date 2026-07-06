#include<iostream>
using namespace std;
int main()
{
    float num;
    cout<<"Enter a no:"<<endl;
    cin>> num; 
    int y= (int)num;
    if(y==num) cout<<"Integer";
    else cout<<"not an integer";
}