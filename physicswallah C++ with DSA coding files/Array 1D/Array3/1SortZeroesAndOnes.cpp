#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &c)
{
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}

void sort01(vector<int> &v) 
{
    int n = v.size();
    int numOfZero = 0;
    int numOfones = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            numOfZero++;
        else
            numOfones++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < numOfZero)
            v[i] = 0;
        else
            v[i] = 1;
    }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    display(v);
    // sort(v.begin(),v.end());............--->shortcut use nhi krenge
    sort01(v);
    display(v);

    return 0;
}