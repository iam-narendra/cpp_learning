#include<iostream>
using namespace std;
main(){
    for(int i=0;i<5;i++){
        cout<<"loop in progress-->"<<i<<endl;
        if(i==3){
            continue;
        }
        cout<<"loop continue here"<<endl;

    }
    cout<<"loop exit here"<<endl;
    return 0;
}