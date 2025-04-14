#include <iostream>
using namespace std;
int fact(int x)
{
    int n = 1;
    for (int i = 1; i <= x; i++)
    {
        n = n * i;
    }
    return n;
}
int combination(int n, int r)

{
    
    int nCr = fact(n) / (fact(n - r) * fact(r));
    return nCr;
}

int main()
{
    int n, r;
    cout << "Enter n :";
    cin >> n;
    cout << "Enter r :";
    cin >> r;
    cout << "The Combination of nCr is :" << combination(n, r) << endl;
    cout << "The Pascal Triangle of " << n << " is" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
                cout << combination(i, j) << " ";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}