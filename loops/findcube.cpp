//find cube of given no
#include<iostream>
using namespace std;
main(){
    int n;
    int cube = 0;
    cout<<"enter any no to get cube"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cube = n*n*n;
    }
    cout<<"cube is->>"<<cube<<endl;
    return 0;
}