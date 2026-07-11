#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter three numbers";
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b)
    {
        if(a>=c)
        {
            cout<< a<<"is greatest number"<<endl;
        }
        else cout<<c<<"is greatest number"<<endl;
    }
    if(b>=a)
    {
        if(b>=c)
        {
            cout<<b<<"is greatest number"<<endl;
        }
        else cout<<c<<"is greatest number"<<endl;
        }
    }

