// W.A.P to display the reverse of a given nuber.
#include <iostream>
using namespace std;
int main (){
int number,r=0;
cout << "Enter any number" << "\n";
cin >> number;
while(number>0){
r=r*10+number%10;
number=number/10;
}
cout <<r;
}