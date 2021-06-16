//find sum of  given array
#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
     int sum = 0;
     for(int i=0;i<n;i++)
     sum+= arr[i];
     return  sum;
}

int main(){
int arr[] = {4,6,8,2,1};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"sum of given array is"<<endl<<sum(arr,n);
return 0;

}


