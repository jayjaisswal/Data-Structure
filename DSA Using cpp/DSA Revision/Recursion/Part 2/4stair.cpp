// tell the total no. of possible combination
// if a stair of n steps can be covered by 1 and 2  steps only at a time
// either 1 or two or both
#include <iostream>
using namespace std;

int stair(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return stair(n - 1) + stair(n - 2);
}
int main()
{
    cout << "Enter no. of stair" << endl;
    int x;
    cin >> x;
    cout << stair(x);
}
