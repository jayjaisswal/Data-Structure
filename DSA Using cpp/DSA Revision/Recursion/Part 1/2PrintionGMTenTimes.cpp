#include <iostream>
using namespace std;
void GoodMorning(int n)
{
    if (n == 0) return;       
    cout <<n<<" Good Morning" << endl;
    GoodMorning(n - 1);
}

int main()
{
    GoodMorning(10);
}