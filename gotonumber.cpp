#include <iostream>
using namespace std;
int main (){
    int n = 10;
    cout << "Enter any number" << "\n";
    cin >> n;
    aditi:
    cout << n << "\n";
n--;
if(n>=1){
    goto aditi;
}
}