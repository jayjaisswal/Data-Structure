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

    display(v);
    reversePart(0, 2, v);
    display(v);
    return 0;
}