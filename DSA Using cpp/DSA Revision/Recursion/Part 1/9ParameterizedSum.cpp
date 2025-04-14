#include <iostream>
using namespace std;
void Sum1toN(int sum, int n)
{
    if (n == 0) // base case
    {
        cout << sum << endl;
        return;
    }
     Sum1toN(sum + n, n - 1);
}

int main()
{

    Sum1toN(0, 4);
}