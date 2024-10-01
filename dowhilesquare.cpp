#include<iostream>
using namespace std;
int main (){
int number,s=1,c=0;
bool f = false;
cout << "Enter any number" <<"\n";
cin >> number;
do{
if(s*s==number){
f=true;
break;
 }
s++;
c++;
}while(s<=number/2);
cout <<"counting = " <<c;
if(f==true){
cout << "valid number = " <<s;
}else
{
cout <<"not valid number = ";
}
}