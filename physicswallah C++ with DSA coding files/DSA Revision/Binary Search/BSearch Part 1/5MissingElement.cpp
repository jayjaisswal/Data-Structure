#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int arr[8] = {0, 1, 2, 3, 5, 6, 7, 8};

    // TC : O(n)
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] != num)
        {
            cout << num;
            break;
        }
        else
            num++;
    }
}
