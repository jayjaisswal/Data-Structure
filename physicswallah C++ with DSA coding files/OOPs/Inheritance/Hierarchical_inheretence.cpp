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
//both child 1 and child 2 inherit from parent 1






int main()
{
Child1 c;

return 0;
}