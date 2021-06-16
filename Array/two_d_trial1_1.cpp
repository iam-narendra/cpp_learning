#include<iostream>
using namespace std;
main(){
    int a[3][2] = {{9,8},
                   {7,6},
                   {5,4}
                  };

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++){
            cout<<"element at a["<< i<< "][" <<j<<"]:";
            cout<<a[i][j]<<endl;
        }
    }
    return 0;
}