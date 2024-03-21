#include<iostream>
using namespace std;

class Fruit{
    public:
    string name;
    string color;

};

int main()
{   
    //1st way to define an object
    Fruit apple;//object
    apple.name = "Apple";
    apple.color = "red";
    cout<<apple.name<<" - "<<apple.color<<endl;

    //second way to define an object
    Fruit *mango = new Fruit();
    mango->name  = "Mango";
    mango->color = "Yello";
    cout<<mango->name<<" - "<<mango->color;




return 0;
}