#include <iostream>
using namespace std;
int main (){
    int bill;
    int reading;
    cout << "Enter the reading" << "\n";
    cin >> reading;
    if(reading>=1 && reading<=100){
cout << "bill amount" << reading*3+(0.2*reading*3 )<< "\n";
    }
     else if(reading>=101 && reading<=200){
cout << "bill amount" << reading*5+(0.2*reading*5) << "\n";
    }
     else if(reading>=201 && reading<=500){
      cout << "bill amount"  << reading*7+(0.2*reading*7) << "\n" ;
    }
    else if(reading>500){
cout<< "bill amount" << reading*10+(0.2*reading*10) << "\n";
    }
    else{
        cout << "invalid reading" << "\n";
    }
}