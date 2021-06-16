#include<iostream>
using namespace std;
main(){
    int value[3];  //initializing the array size --> in this line it is 3
    value[0] = 12;  //assining the value in array on given position, here is position is 0
    value[1] = 23;
    value[2] = 35;
    cout<<"value is"<<value[0]<<endl;
    cout<<"value is"<<value[1]<<endl;
    cout<<"value is"<<value[2]<<endl;

    int arr[8] ={5,25,36,95,85};
    for(int i=0;i<8;i++){
        cout<<"values--"<<arr[i]<<endl;
    }

    
    
    return 0;

}