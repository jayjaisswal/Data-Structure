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

void reversePart(int i, int j, vector<int> &a)
{
    while (i <= j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}

void normalReverse(vector <int>& b)
{
        int i = 0;
        int j = b.size()-1;
        while (i <= j)
    {
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }
    return;

}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(3);
    v.push_back(8);
    v.push_back(6);
    v.push_back(4);

    display(v);
    reversePart(0, 3, v);
    display(v);
    normalReverse(v);
    display(v);

}
