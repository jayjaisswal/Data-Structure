#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i <= a.size() - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

vector<int> merge(vector<int>& arr1, vector<int>& arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    vector<int> res(m + n);////////////////

    int i = 0; // arr1
    int j = 0; // arr2
    int k = 0; // res

    while (i <= n - 1 && j <= m - 1)
    {
        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
        else
        { // arr2[j]<arr1[i]
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    // for remaining elements
    if (i == n)
    { // arr1 ke sare elements utha chuka hoon
        while (j<=m-1){
            res[k] = arr2[j];
            k++;
            j++;
        }
    }

    if (j == m)
    { // arr2 ke sare elements utha chuka hoon
        while (i<=n-1){
            res[k] = arr1[i];
            k++;
            i++;
        }
    
    }

    return res;
    
}

int main()
{
    vector<int> arr1;
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.push_back(5);
    display(arr1);



    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    display(arr2);

    // int arr1[4] = {1, 4, 5, 8};
    // int arr2[6] = {2, 3, 6, 7, 10, 12};

    // vector<int> v = merge(arr1, arr2);
    // display(v);
    // merge(arr1, arr2);
    for (int i = 0; i <=merge(arr1, arr2). size() - 1; i++)
    {
        cout << merge(arr1, arr2)[i] << " ";
    }
    
    

    
}
