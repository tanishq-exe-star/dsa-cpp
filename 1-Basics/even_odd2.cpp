#include <iostream>
using namespace std;
int main()
{
    cout <<"Enter a number: ";
    int num;
    cin >> num;
    cout<<(num%2==0? "the number is even" : "the number is odd") << endl;
}
