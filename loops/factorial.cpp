//find factorial of given no
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any no to find factorial"<<endl;
    cin>>n;
      int fact =1;
      for(int i=1;i<=n;i++)
      fact = fact*i;
      cout<<"factorial of entered number ->>"<<fact<<endl;
    return 0;
}

