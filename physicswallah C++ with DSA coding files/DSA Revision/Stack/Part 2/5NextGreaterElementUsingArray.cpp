#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;



int main()
{
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;


    // brute force TC= O(n2) SC= O(1).......................................
    // int ans[n];

    // for (int i = 0; i < n; i++)
    // {
    //     ans[i] = -1;

    //     for (int j = i + 1; j < n; j++)

    //     {

    //         if (arr[i] < arr[j])
    //         {
    //             ans[i] = arr[j];
    //             break;
    //         }
    //     }
    // }
    // // ans
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ans[i] << " ";
    // }


    // using stack ..........................................................
    // pop, ans, push we travel from right to left reverse
    // TC: O(n) SC: O(n)
    int ans[n];
    stack<int> s;
    ans[n - 1] = -1;
    s.push(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        // pop all the elements smaller that arr[i]
        while (s.size() > 0 && s.top() <= arr[i])
        {
            s.pop();
        }

        // mark thr ans
        if (s.size() == 0)
            ans[i] = -1;
        else
            ans[i] = s.top();

        // push
        s.push(arr[i]);
    }

    // print ans
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
    

