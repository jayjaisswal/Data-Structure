#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i <= a.size() - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

//using function m--4
void reverse(vector<int> &v)
{
    int i = 0;
    int j = v.size()-1;
    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(6);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);

    display(v);
    //reverse
    int i = 0;
    int j = v.size()-1;

    //using for loop m--1
    // while(i<=j)
    // {
    //     //swap v[i] and v[j]
    //     int temp;
    //     temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
    // display(v);
//...........................................................

    //using for loop m--2
    // for(int i = 0,j=v.size()-1;i<=j;i++,j--)
    // {
    //      int temp;
    //     temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;

    // }
    //  display(v);

//...........................................................
     //vector function to reverse  m--3
    //  reverse(v.begin(), v.end());
    //   display(v);


    reverse(v);
    display(v);

    return 0;
}