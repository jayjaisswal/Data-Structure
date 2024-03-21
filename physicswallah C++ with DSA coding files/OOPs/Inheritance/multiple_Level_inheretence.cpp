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
class Grandchild :public child{
public:
    Grandchild(){
        cout<<"Grandchild class"<<endl;
    }

};

int main()
{

   Grandchild g;

return 0;
}