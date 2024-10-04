#include <iostream>
using namespace std;
int main (){
 int k,a = 9,c = 0;
 cout << "Enter any number" << "\n";
cin >> a;
k = a - 1;
while(k>=1)
{
if(a%k==0){
c = c+k;
}
k--;
}
if(c==a){
cout << "perfect no";
}
else{
cout << "not perfect no";
}
}