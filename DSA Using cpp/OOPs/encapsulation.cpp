#include<iostream>
using namespace std;

class ABC{
    int x;

    public:
    void set(int n){
        x = n;
    }

    int get(){
        return x;
    }



};
int main()
{

ABC obj;
obj.set(3);
cout<<obj.get()<<endl;
return 0;
}