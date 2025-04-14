#include <iostream>
using namespace std;


// as calling two times so TC=O(n) too bad
int fibonacci(int n)
{
    if(n==1 || n==2) return 1;
    int leftAns = fibonacci(n-1);
    int rightAns = fibonacci(n-2);
    return leftAns+ rightAns;
    
    
}
int main()
{
    cout << "Enter Nth Number" << endl;
    int x;
    cin >> x;
    cout<<fibonacci(x);
}
