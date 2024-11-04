#include <iostream>
using namespace std;
void gun(){
    return;
    cout<<"Hello CW"<<endl;
}
void fun(){

    cout<<"Hello PW"<<endl;
    gun();
    cout<<"Come Again"<<endl;
    return;
}
int main()
{
    fun();
    cout<<"hello";
}