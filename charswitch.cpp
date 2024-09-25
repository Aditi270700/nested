#include <iostream>
using namespace std;
int main (){
    char c;
    cout << "Enter any character" << "\n";
    cin >> c;
    switch(c)
    {
    case 'M':
    case 'm':
    {
cout << "Male";
break;
    }
    case 'F' :
    case 'f':{
        cout << "Female" ;
        break;
    }
    default:{
        cout << "trangender";
        break;
    }
}
}