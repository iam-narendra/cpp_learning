#include<iostream>
using namespace std;

main(){

cout<<"1.\tAdd new file"<<endl;
cout<<"2.\tDelete new file"<<endl;
cout<<"3.\tView new file"<<endl;
cout<<"4.\tSearch new file"<<endl;
cout<<"5.\tQuit new file"<<endl;

cout<<"Enter your choice";
int value;
cin>>value;

if(value<3){
    cout<<"insufficienct files";
}
else{
    cout<<"sufficent files to search";
}
if(value==5){
    cout<<"exit from system";
}
else{
    cout<<"choose other option to perform task";
}
if(value ==4){
    cout<<"perform search";
}
else{
    cout<<"there is no item for search!! choose another option";
}


return 0;
}