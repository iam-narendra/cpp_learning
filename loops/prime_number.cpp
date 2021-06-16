#include<iostream>
using namespace std;
main(){
    cout<<"enter any no"<<endl;
    int n,i;
    cin>>n;
    
    for(i=2;i<=n;i++){
        if(n%i==0){
             
            cout<<"This is non prime no-->"<<n<<endl;
           break;
        }
    }
    if(i==n){
        cout<<"This is Prime no-->"<<n<<endl;
    }
    return 0;
}