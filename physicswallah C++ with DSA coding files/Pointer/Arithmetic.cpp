#include <iostream>
using namespace std;
int main()
{
    // int x = 7;
    // int *ptr = &x;
    // cout << ptr << endl; // 0x61ff04
    // ptr = ptr + 1;       //diff is 4 byte
    // cout << ptr << endl; // 0x61ff08

    // bool flag = true;
    // bool *ptr1 = &flag;
    // cout << ptr1 << endl; // 0x61ff03
    // ptr1 = ptr1 + 1;      ////diff is 1 byte
    // cout << ptr1 << endl; // 0x61ff04

    // int x = 7;
    // int *ptr = &x;
    // cout << *ptr << endl; // 7
    // ptr = ptr + 1;
    // cout << *ptr << endl; // 6422284

    // bool flag = true;
    // bool *ptr1 = &flag;
    // cout << ptr1 << endl;// 0x61ff0b
    // ptr1++;  //<<----------    
    // cout << ptr1 << endl;// 0x61ff0c

    int x = 7;
    int *ptr = &x;
    cout << *ptr << endl; 
    (*ptr)++; //---> *ptr++ throw error 
    cout << *ptr << endl; 

    return 0;
}