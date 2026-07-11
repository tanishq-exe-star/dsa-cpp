#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter sides of traingle"<<endl;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b)
    {
        cout<<"Triangle is valid"<<endl;
    }
    else cout<<"Triangle is not valid"<<endl;
    }

