#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<" Enter a alphabet:";
    cin>> ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"Alphabet is capital:"<<endl;
    }
    else cout<<"Alphabet is small"<<endl;
}
