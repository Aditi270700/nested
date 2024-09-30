#include <iostream>
using namespace std;
int main (){
int h,m;
cout << "enter hour(0-23)" <<"\n";
cin >> h;
cout << "enter minute (0-59)" <<"\n";
cin >>m;
switch(h/12)
{
    case 0:
    {
cout << "hour : " <<h <<":" <<m << "a.m" <<"\n";
break;
    }
case 1:
{
int k = (h-12) ==0?0:h;
if(k==0){
cout << "00:00" <<"a.m" <<"\n";
}
else {
    cout <<k-12 <<":"<<m <<"p.m"<<"\n";
}
break;
}
default:{
    cout << "invalid time" <<"\n";
    break;
}
    return 0;
}
}