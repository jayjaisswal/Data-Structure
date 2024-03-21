// take nothing return something

#include <iostream>
using namespace std;
int sum(void); // function declaration

int main()
{ // function call
   cout << "the sum is " << sum();
   return 0;
}
int sum(void) // function definition
{

   int x, y, sum;

   cout << "enter first number " << endl;
   cin >> x;

   cout << "enter first number " << endl;
   cin >> y;
   sum = x + y;
   return sum;
}