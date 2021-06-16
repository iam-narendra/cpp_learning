/*In do while loop inside the loop statement printed at ones then this loop check the condition 
--> if condition satisfied then loop terminated
--> if not then inside loop statement executed again*/

#include<iostream>
using namespace std;

main(){
    const string password = "hello";
    string input;
    do{
        cout<<"enter your password"<<endl;
        cin>>input;

        if(input != password){
            cout<<"access denied"<<endl;
        }

    }while(input != password);

    cout<<"Password Access"<<endl;

    return 0;
}