#include <iostream>
using namespace std;
int main()
{
 int size;
 cout<<"Enter the no. of student"<<endl;
 cin>>size;
 int marks[size];

 cout<<"enter the marks"<<endl;
 //input
 for(int i=0; i<=size-1;i++){
    cin>>marks[i];
 }

 for(int i=0; i<=size-1;i++){
    if(marks[i]<35){
        cout<<i<<" ";
    }
 }
   
}