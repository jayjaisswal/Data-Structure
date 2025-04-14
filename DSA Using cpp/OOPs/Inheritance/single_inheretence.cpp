#include<iostream>
using namespace std;


class parent{
public:
    parent(){
        cout<<"parent class"<<endl;
    }

};

class child :public parent{
public:
    child(){
        cout<<"child class"<<endl;
    }

};

////->here first parent class wii print then child class will print


int main()
{

    child c;

return 0;
}