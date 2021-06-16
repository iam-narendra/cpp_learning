// sum of n terms
#include<iostream>
using namespace std;

main(){
    int sum = 0,n;
     cout<<"enter the no"<<endl;
     cin>>n;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    cout<<"value of n terms"<<sum<<endl;
    return 0;
}