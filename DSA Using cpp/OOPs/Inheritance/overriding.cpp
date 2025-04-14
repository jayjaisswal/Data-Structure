// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Parent {
public:
	void Print()
	{
		cout << "Base Function" << endl;
	}
};

class Child : public Parent {
public:
	void Print()
	{
		cout << "Derived Function" << endl;
	}
};

int main()
{
	Child C;
	C.Print();
	return 0;
}
