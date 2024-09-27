#include <iostream>
using namespace std;
int main (){
    int number, i = 1;
    cout << "Enter any number" << "\n";
    cin >>number;
    do{
        i = i*number;
        number--;
    }while(number>=1);
    cout << i;
}