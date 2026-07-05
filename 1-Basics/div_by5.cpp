#include <iostream>
using namespace std;
int main()
{
cout<< "Enter a number:";
int num;
cin>>num;
bool a= num%5;
cout<< (a? "the number is not divisible by 5" : "the number is divisible by 5") << endl;

}
