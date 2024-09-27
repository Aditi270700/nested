#include <iostream>
using namespace std;
int main (){
    int n1,n2,a;
    cout << "Enter any number" << "\n";
    cin >> n1;
    cout << "Enter any number" << "\n";
    cin >> n2;
    switch(a)
    {
    case 10:{
cout << n1+n2<< "Male";
break;
    }
    case 20:{
        cout<< n1*n2 << "Female" ;
        break;
    }
    default:{
        cout << "trangender";
        break;
    }
}
}