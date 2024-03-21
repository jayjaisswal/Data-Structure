#include <exception>
#include <iostream>
using namespace std;
// definition of custom termination function
void myhandler()
{
cout << "Inside new terminate handler\n";
abort();
}
int main(){
// set new terminate handler
set_terminate(myhandler);
try {
cout << "Inside try block\n";
throw 100;
}
catch (char a) // won't catch an int exception
{
cout << "Inside catch block\n";
}
cout << "Outsideeee\n";
return 0;
}