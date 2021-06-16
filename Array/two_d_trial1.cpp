#include<iostream>
using namespace std;
main(){
   
   int numero[2][2];
   cout<<"enter numbers";
   for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
           cout<<numero[i][j]<<endl;
           cin>>numero[i][j];
       }
   }

    for (int i = 0; i < 2; i++)    {
        for(int j=0;j<2;j++){
            cout<<numero[i][j];
        }
    }
    
    return 0;

}