#include <iostream>
using namespace std;
void incdecprint(int a, int b)
{

    if (b < a)
        return;
    cout << a << " ";
    incdecprint(a + 1, b);

    if (a != b)
        cout << a << " ";
}

int main()
{

    incdecprint(1, 5);
}