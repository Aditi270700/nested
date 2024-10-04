#include <iostream>
using namespace std;
int main (){
 int k,a = 9,c = 0;
 cout << "Enter any number" << "\n";
cin >> a;
k = a;
while(k>=1)
{
if(a%k==0){
c++;
}
k--;
}
cout << "factor = " << c;
}