#include <iostream>
using namespace std;
void find(int n, int *ptr1, int *ptr2)
{
    *ptr2 = n % 10; // lastDigit
    while (n > 9)
    {
        n = n / 10;
    }
    *ptr1 = n; // FirstDigit
    return;
}
int main()
{
    int n;
    cout << "Enter n Digit Number :";
    cin >> n;
    int FirstDigit, lastDigit;
    int *ptr1 = &FirstDigit;
    int *ptr2 = &lastDigit;
    find(n, ptr1, ptr2);
    cout << FirstDigit << " " << lastDigit << endl;
    cout << *ptr1 << " " << *ptr2;

    return 0;
}