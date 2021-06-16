#include<iostream>
using namespace std;

main(){
string pass = "Hiber";
cout<<"Enter your Password here"<<endl;

string input;
cin>>input;
if(input == pass){
    cout<<"Access granted";
}

if(input != pass){
    cout<<"Access Denied";
}

return 0;
}