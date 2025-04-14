#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

// brute force TC= O(n2) SC= O(1).......................................
// void nextGreater(vector<int> &v)
// {
//     vector<int> ans;

//     for (int i = 0; i < v.size() ; i++)
//     {
//         bool flag = true;
//         for (int j = i + 1; j < v.size(); j++)

//         {

//             if (v[i] < v[j])
//             {
//                 ans.push_back(v[j]);
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             ans.push_back(-1);
//         }
//     }
//     // ans
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// using stack ..........................................................
// pop, ans, push
void nextGreaterStack(vector<int> &v)
{
    int n = v.size();
    stack<int> s;
    vector<int> ans(n);
    ans[n - 1] = -1;
    s.push(v[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        // pop all the elements smaller that v[i]
        while (s.size() > 0 && s.top() <= v[i])
        {
            s.pop();
        }

        // mark thr ans
        if (s.size() == 0)
            ans[i] = -1;
        else
            ans[i] = s.top();

        // push
        s.push(v[i]);
    }

    // print ans
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{

    vector<int> v;
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
    for (int i = 0; i < 8; i++)
    {
        v.push_back(arr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // nextGreater(v);

    nextGreaterStack(v);
}