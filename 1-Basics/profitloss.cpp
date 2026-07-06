#include<iostream>
using namespace std;
int main()
{
    cout<< "Enter cost price"<<endl;
    float cp;
    cin>>cp;
    cout<<"Enter selling price"<<endl;
    float sp;
    cin>>sp;
    if(sp>cp)
    {
        cout<<"Seller has made profit of:"<< (sp-cp)<<endl;

    }
    else if(cp>sp)
    {
        cout<<"Seller has made loss of:"<<(cp-sp)<<endl;

    }
    else
    cout<< "Seller has made no profit and no loss"<<endl;
}