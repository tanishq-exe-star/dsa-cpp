#include<iostream>
using namespace std;
int main()
{
    cout<<"ENTER COORDINATES";
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"Point is in first quadrant"<<endl;
    }
    else if(x<0 && y>0)
    {
        cout<<"Point is in second quadrant"<<endl;
    }
    else if(x<0 && y<0)
    {
        cout<<"Point is in third quadrant"<<endl;
    }
    else if(x>0 && y<0)
    {
        cout<<"Point is in fourth quadrant"<<endl;
    }
    else if(x==0 && y!=0)
    {
        cout<<"Point is on y-axis"<<endl;
    }
    else if(y==0 && x!=0)
    {
        cout<<"Point is on x-axis"<<endl;
    }
    else
    {
        cout<<"Point is at origin"<<endl;
    }
} 