#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your age: ";
    cin>>n;
    if(n>=18)
    {
        cout<<"You are eligible for a driving license." << endl;
    }
    else
    {
        cout<<"You are not eligible for a driving license." << endl;
    }
    return 0;
}