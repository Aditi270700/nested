#include <iostream>
using namespace std;
int main (){
    int n1,n2,a;
    cout << "Enter any character" << "\n";
    cin >> a;
    cout << "Enter any number" << "\n";
    cin >> n1;
    cout << "Enter any number" << "\n";
    cin >> n2;
    switch(a)
    {
    case n1+n2:{
cout << "Male";
break;
    }
    case n1 * n2:{
        cout << "Female" ;
        break;
    }
    default:{
        cout << "trangender";
        break;
    }
}
}