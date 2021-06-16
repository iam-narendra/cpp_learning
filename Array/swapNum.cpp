// swap any two no
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter any no for a"<<endl;
    cin>>a;
    cout<<"enter any no for b"<<endl;
    cin>>b;
    cout<<"a:"<<a<<"b:"<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"a:"<<a<<"b:"<<b<<endl;
    return 0;
}