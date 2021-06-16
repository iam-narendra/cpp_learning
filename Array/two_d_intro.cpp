//this multidimentional or 2D array where we create 2 rows and 3 columns

#include<iostream>
using namespace std;
main(){
    string people[2][3]={
            {"neeraj", "pankaj", "raju"}, //1st row with 3 columns
            {"Riya", "Sneha", "Mani"}    //2nd row with 3 columns
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<people[i][j]<<" "<<flush;
        }
        cout<<endl;
    }

    return 0;
}