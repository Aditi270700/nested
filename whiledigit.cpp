// WAP to count the digit of given number

#include <iostream>
using namespace std;
int main (){
int a,c = 0;
cout << "Enter any number" << "\n";
cin >> a;
while(a>0)
{
if(a%10>=0)
{
c++;
}
a=a/10;
}
cout << "total digit" << c;
}