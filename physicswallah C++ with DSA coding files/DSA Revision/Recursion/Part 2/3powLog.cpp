// #include <iostream>
// using namespace std;
// int pow(int x, int n)
// {
//     if (n == 0)
//         return 1;
//     return x * pow(x, n - 1);
// }
// int main()
// {
//     cout << pow(3, 8);
// }

#include <iostream>
using namespace std;
int pow(int x, int n)
{
    if (n == 1)
        return x;
    int ans = 0;
    if (n % 2 == 0)
    {
         ans = pow(x, n / 2);
         return ans * ans;
    }
    else{
        ans = pow(x, n / 2) ;
        return ans * ans *x;
    }
    
   
}
int main()
{
    cout << pow(3, 5);
}