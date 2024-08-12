#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int count = 0;
    int arr[] = {1, 2, 31, 4, 5, 17, 19, 31};
    for (int i = 0; i <= 7; i++)
    {
        if (arr[i] > 4)
            count++;
    }

   

    cout << count << endl;
}
