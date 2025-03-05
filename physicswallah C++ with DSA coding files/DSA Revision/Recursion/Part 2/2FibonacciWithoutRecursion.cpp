// Fibonacci Without Recursion

#include <iostream>
using namespace std;

int fibonacci(int n)
{

    int a = 1;
    int b = 1;
    if(n==1 || n ==2) {
        
        return 1;
    }
    int sum = 1;
    for(int i = 3; i<=n;i++){
        sum = a + b;
        a = b;
        b = sum;
        
    }
    return sum;
    
    
}
int main()
{
    cout << "Enter Nth Number" << endl;
    int x;
    cin >> x;
    cout<<fibonacci(x);
}
