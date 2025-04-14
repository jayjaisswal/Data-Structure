#include<iostream>
using namespace std;


class Parent1{
public:
    Parent1(){
        cout<<"parent1 class"<<endl;
    }

};


class Child1 :public Parent1{
public:
    Child1(){
        cout<<"child1 class"<<endl;
    }

};

class Child2 :public Parent1{
public:
    Child2(){
        cout<<"child2 class"<<endl;
    }

};

class Grandchild :public Child1,public Child2{
public:
    Grandchild(){
        cout<<"Grandchild class"<<endl;
    }

};
// In output parent child constructor called two times by child1 and child 2



int main()
{
Grandchild g;

return 0;
}