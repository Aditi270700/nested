 /*
    enter any num 1 and num2
    select 10 for add
     select 20 for add
      select 30 for add
       select 40 for add
    */
#include <iostream>
using namespace std;
int main (){
    int n1, n2 ,c;
   cout << "Enter number 1" <<"\n";
   cin >> n1;
   cout << "Enter number 2" <<"\n";
   cin >> n2;
cout << "select 10 for add" << "\n";
cout << "select 20 for multiply" << "\n";
cout << "select 30 for division" << "\n";
cout << "select 40 for subtraction" << "\n";
cin >> c;
switch (c)
{
    case 10:
    {
cout << n1 + n2;
break;
    }
    case 20:
    {
cout << n1 * n2;
break;
    }
    case 30:
    {
cout << n1 / n2;
break;
    }
    case 40:
    {
cout << n1 - n2;
break;
    }

    default:
    {
        cout << "go to hell!!!" << "\n";
    }
}
}