

#include <iostream>
#include <vector>
using namespace std;
int hcf(int a, int b){
    if(a==0) return b;
    else return hcf(b%a,a);
}
int main()
{
    int a = 24;
    int b = 60;
    cout<<hcf(a, b);
    cout<<hcf(b, a);
}

// #include <iostream>
// #include <vector>
// using namespace std;
// void hcf(int smallNo, int largeNo)
// {
//     for (int i = smallNo; i >= 2; i--)
//     {
//         if (smallNo % i == 0 && largeNo % i == 0)
//         {
//             cout << i << endl;
//             return;
//         }
//     }
//     cout << 1;
//     return;
// }
// int main()
// {
//      hcf(17, 777);
// }