#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your age: ";
    cin>>n;
   bool a = (n >= 18);
   cout<< (a? "You are eligible for driving." : "You are not eligible for driving.") << endl;
    return 0;