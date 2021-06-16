#include<iostream>

using namespace std;
struct book{
   int bookid;
   char title[20];
   float price;
};
void display(book);
book input();
main(){
   book b1;
   // cout<<"enter bookid, title and price of book"<<endl;
   // cin>>b1.bookid>>b1.title>>b1.price;
    b1= input();
    display(b1);
}
void display(book b)
{
   cout<<"\n"<<b.bookid<<b.title<<" " <<b.price;
}
book input(){
   book b;
   cout<<"enter bookid, title and price of book"<<endl;
   cin>>b1.bookid>>b1.title>>b1.price;
   return(b);
}