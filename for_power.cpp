#include <iostream>
using namespace std;
int main (){
int power,base,result=1;
cout << "Enter the power" <<"\n";
cin >> power;
cout << "Enter the base" << "\n";
cin >> base;
for(power;power>0;power--)
{
result = result*base;
}
cout<<result;
}