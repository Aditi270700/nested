// Wap to generate the programm any number using loop table
#include <iostream>
using namespace std;
int main (){
    int number, i = 1;
    cout << "Enter any number" << "\n";
    cin >> number;
    do{
        cout << number*i << "\n";
        i++;
    }
    while(i<=10);

}