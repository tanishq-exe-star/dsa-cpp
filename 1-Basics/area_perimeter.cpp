#include <iostream>
using namespace std;
int main()
{
float length, width;
cout<<" ENTER LENGTH: ";
cin>> length;
cout<<" ENTER BREADTH: ";
cin>> width;
float area = length * width;
float perimeter = 2 * (length + width);
cout<<" AREA: "<<area<<endl;
cout<<" PERIMETER: "<<perimeter<<endl;
return 0;
}