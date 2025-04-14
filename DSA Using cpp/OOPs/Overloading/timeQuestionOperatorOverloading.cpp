#include<iostream>
using namespace std;
class Time
{
    int hours;
    int minutes;
    int seconds;
    public:
    // Time(){
    // hours=0;
    // minutes=0;
    // seconds=0;
    // }
    Time (int h=0, int m=0 , int s=0){
        hours=h;
        minutes=m;
        seconds=s;
    }
    void display(){
        cout<<hours<<" hours ,"<<minutes<<" minutes ,"<<seconds<<" seconds"<<endl;
    }
    Time operator + (Time t){
        Time result;
        result.seconds=seconds+t.seconds;
        result.minutes=minutes+t.minutes+((result.seconds)/60);
        result.hours=hours+t.hours+((result.minutes)/60);
        result.seconds=result.seconds%60;
        result.minutes=result.minutes%60;
        return result;
    }

};
int main()
{
    Time t1(6,3,55);
    Time t2(2,59,04);
    Time t3=t1+t2;
    // cout<<"time";
    t1.display();
    // cout<<"time";
    t2.display();
    // cout<<"time";
    t3.display();

return 0;
}