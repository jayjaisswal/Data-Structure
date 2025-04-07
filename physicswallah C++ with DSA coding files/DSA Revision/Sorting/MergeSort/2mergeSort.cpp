#include <iostream>
#include <vector>
#include <string>

using namespace std;
void mergeTwoSortedArray(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
            res[k++] = a[i++];

        else
            res[k++] = b[j++];
    }
    if (i == a.size())
    {
        while (j < b.size())
        {
            res[k++] = b[j++];
        }
    }
    if (j == b.size())
    {
        while (i < a.size())
        {
            res[k++] = a[i++];
        }
    }
}

void mergSort(vector<int> &v)
{
    int n = v.size();
    if (n == 1)
        return;
    int n1 = n / 2;
    int n2 = n - n / 2;

    vector<int> a(n1);
    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }

    vector<int> b(n2);
    for (int i = 0; i < n2; i++)
    {
        b[i] = v[i + n1];
    }

    mergSort(a);
    mergSort(b);
    mergeTwoSortedArray(a, b, v);
    // delete a; this syntax is use in array
    // delete b;

    // in vector we use
    a.clear();
    b.clear();
}

int main()
{
    int arr[] = {7, 3, 9, 4, 2, 1, 7, 8, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v(arr, arr + n);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    mergSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}