#include <iostream>
using namespace std;

int main()
{
    int arr[5][6] = {{0, 0, 0, 0, 1, 1}, {0, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {0, 0, 0, 0, 1, 1}, {0, 0, 0, 1, 1, 1}};
    int m = 5; // rows
    int n = 6; // columns
    int row = -1;
    int maxOnes = -1;
    int x = 1;

    for (int i = 0; i < m; i++)
    {
        int count = 0; // no of one in ith row
        int low = 0;
        int high = n - 1;
        int firstidx = -1;

        while (high >= low)
        {
            int mid = low + (high - low) / 2;
            if (arr[i][mid] == x)
            {

                if (mid == 0)
                {

                    firstidx = mid;
                    break;
                }
                else if (arr[i][mid - 1] != x)
                {
                    firstidx = mid;
                    break;
                }
                else{
                    high = mid - 1;
                }
            }
            else if (arr[i][mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if (firstidx != -1)
            count = n - firstidx;
        
        if (maxOnes < count)
        {
            maxOnes = count;
            row = i;
        }
    }
    cout << row << " " << maxOnes;
}
