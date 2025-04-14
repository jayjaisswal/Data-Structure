#include<iostream>
using namespace std;
int main()
{
    //implicit
    // double x = 8.98;
    // int y = x;
    // cout<<y;

    // float x = 8.98;
    // double y = x;
    // cout<<y;

    //............................

    //explicit
    // int num1=7;
    // double num2 = (double)num1;
    // cout<<num2;

    double num1 = 67.8;
    int num2 = static_cast<int>(num1);
    cout<<num2;





return 0;
}