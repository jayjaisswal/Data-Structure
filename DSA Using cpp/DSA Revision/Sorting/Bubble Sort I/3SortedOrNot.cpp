#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    bool flag = false;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > arr[i + 1])
            flag = true;
        break;
    }

    if (flag == true)
        cout << "Not sorted";
    else
        cout << "Sorted";
}
