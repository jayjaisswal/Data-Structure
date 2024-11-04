#include <iostream>
using namespace std;
int factorial(int n)
{
    

    if (n == 1 || n == 0)
        return 1;
    else
    {
       cout <<n<<endl;
        return (n * factorial(n - 1));
    }
}

int main()
{
    cout << factorial(5)<<endl;
    int fact = 1;
    for(int i = 1;i<=5;i++){
        fact = fact*i;
    }
    cout<<fact;
    
}