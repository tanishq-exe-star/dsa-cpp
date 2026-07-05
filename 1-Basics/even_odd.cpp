#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    bool a= num%2;
    cout<< (a? "the number is odd" : "the number is even") << endl;
    return 0;
}
