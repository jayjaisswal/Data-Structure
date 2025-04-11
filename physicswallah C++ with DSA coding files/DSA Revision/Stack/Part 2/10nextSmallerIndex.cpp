#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;



int main()
{
    int arr[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;


    int ans[n];
    stack<int> s;
    ans[n - 1] = n;
    s.push(n-1);

    for (int i = n - 2; i >= 0; i--)
    {
        // pop all the elements smaller that arr[i]
        while (s.size() > 0 && arr[s.top()] >= arr[i])
        {
            s.pop();
        }

        // mark thr ans
        if (s.size() == 0)
            ans[i] = n;
        else
            ans[i] = s.top();

        // push
        s.push(i);
    }

    // print ans
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
    

