#include <iostream>
using namespace std;
int main (){
    int percent10th,percent12th;
    cout << "Enter the tenth percent" << "\n";
    cin >> percent10th;
    if(percent10th>=65 && percent10th<=100){
cout << "Enter twelth percent number" << "\n";
cin >> percent12th;
if(percent12th>=70 && percent12th<=100){
cout << "you are inligible clerk" << "\n";
}
else
{
cout << "you are inligible peon" << "\n";
}
    }
else
{
cout << "you are not qualified" << "\n";
}
    } 
