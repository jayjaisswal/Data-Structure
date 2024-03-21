#include<iostream>
using namespace std;

class Rectangle{
    public:
    int l;
    int b;

    Rectangle(){ //default constructor 
        l = 0;   //non paramaterised constructor 
        b = 0;
    }

    Rectangle(int x,int y){  //paramaterised constructor
        l=x;
        b=y;
    }

    Rectangle(Rectangle& r){  //copy constructor
                  //--initialise an obj. by another existing object

        l = r.l;
        b = r.b;
    }

    ~Rectangle(){                  //Destructor
        cout<<"Destructor is called"<<endl;

    }


};



int main()
{
    Rectangle* r1 = new Rectangle();
    cout<<r1->l<<" - "<<r1->b<<endl;
    delete r1;

    Rectangle r2(7,9);
     cout<<r2.l<<" - "<<r2.b<<endl;

    Rectangle r3 = r2;
    cout<<r3.l<<" - "<<r3.b<<endl;



return 0;
}