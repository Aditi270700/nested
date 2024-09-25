/*Enter any 2 number
a,b select 1 for swap
select 2 for max value*/

#include <iostream>
using namespace std;
int main (){
    int n1, n2, c;
cout << " Enter two number" << "\n";
cin >> n1 >>n2;
cout << "1 for swap \n";
cout << "2 for max value\n";
switch (c)
{
    case 1:
    {
        int t;
        t = n1;
        n1 = n2;
        n2 = t;
        cout << "after swapped value of n1" << n1 <<"\n";
         cout << "after swapped value of n2" << n2 <<"\n";
         break;
    }
    case 2:
    {
        if (n1 > n2)
{
    cout << n1 << "is max";
}
  else
  {
    cout << n2 << "is max";
  } 
  break;     
    }
default : 
{
    cout << "invalid choice";
    break;
}
    return 0;
}
}