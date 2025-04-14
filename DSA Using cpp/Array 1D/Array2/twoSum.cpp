#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cout << "enter Target :";
    cin >> x;
    vector<int> v;
    int n;
    cout << "Enter size of array :";
    cin >> n;

    cout << "Enter Elements of Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }

    for (int i = 0; i <= v.size() - 2; i++)
    {
        for (int j = i + 1; j <= v.size(); j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
    return 0;
}