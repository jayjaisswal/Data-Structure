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

void reversePart(int i, int j, vector<int> &v)
{
    while (i <= j)
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
    v.push_back(3);

    display(v);

    int k = 57;
    int n = v.size(); 

    //rotating our array
    if(k>n)
    {
        k= k % n;
    }
    reversePart(0, n-k-1, v);
    reversePart(n-k, n-1, v);
    reversePart(0, n-1, v);
    display(v);
    return 0;
}