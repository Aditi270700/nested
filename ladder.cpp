// write a programm find out the largest number among three
#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout << "Enter number 1" << "\n";
    cin >> a;

    cout << "Enter number 2" << "\n";
    cin >> b;

    cout << "Enter number 3" << "\n";
    cin >> c;
    if(a>b && a>c){
cout <<a << "Number 1 is largest" << "\n";
    }
    else if(b>a && b>c){
cout <<b << "Number 2 is largest " << "\n";
    }
    else{
        cout <<c <<"Number 3 is largest" << "\n";
    }

}