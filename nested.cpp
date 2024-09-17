#include <iostream>
using namespace std;
int main (){
    int password,otp;
    cout << "Enter the password" << "\n";
    cin >> password;
    if(password==2000){
cout << "Enter otp number" << "\n";
cin >> otp;
if(otp==2054){
cout << "you are owner" << "\n";
}
else
{
cout << "you are fraud" << "\n";
}
    }
else
{
cout << "invalid password" << "\n";
}
    } 
