#include<iostream>
using namespace std;
main(){
    for(int i=0;i<5;i++){
        
        if(i==4){
            break;
        }
        cout<<"looping in progress-->>"<<i<<endl;
    }
    cout<<"looping quit"<<endl;
    return 0;
}