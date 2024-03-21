#include<iostream>
#include<exception>
using namespace std;
class Overspeed : public exception 
{
    int speed;
    public:
    const char * what()
    {
        return "You are in the car not in the aeroplane ";
    }

};

int main()

{
    int carspeed = 0;
    try
    {
        while(1)
        {
            carspeed+=10;
            if(carspeed>100)
            {
                Overspeed s;
                throw s;

            }
            cout<<"carspeed :"<<carspeed<<endl;
        }
    }
        catch (Overspeed x)
        {
            cout<<x.what();
        }
    
    return 0;
    }
    


  