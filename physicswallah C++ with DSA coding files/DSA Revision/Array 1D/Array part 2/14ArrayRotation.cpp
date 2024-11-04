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

    //k=2
    int n = v.size();
    int k = 50;
    if(k>n) k = k%n;
    display(v);
    //rotate
    reversePart(0, n-k-1 , v);
    reversePart(n-k, n-1 , v);
    reversePart(0, n-1 , v);
    display(v);
  

}
