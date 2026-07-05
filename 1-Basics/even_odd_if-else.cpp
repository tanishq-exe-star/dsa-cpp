#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    if(num%2==0)
        cout<<"the number is even"<<endl;
    else
        cout<<"the number is odd"<<endl;
    return 0;
}