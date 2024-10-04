// W.A.P to display the sum of digit of a given number using while loop
#include <iostream>
using namespace std;
int main (){
int number, c = 0;
cout << "Enter any number" << "\n";
cin >> number;
while(number>0){
c = c+number%10;
number = number/10;
}
cout <<c;
}