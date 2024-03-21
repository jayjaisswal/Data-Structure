// Example: define member function without argument within 
// the class 

#include <iostream> 
using namespace std; 

class Parent { 
	int id; 
	char name[10]; 

public: 
	void detail_p() 
	{ 
		cout << "Enter the Id:"; 
		cin >> id; 
		cout << "Enter the Name:"; 
		cin >> name; 
	} 

	void display_p() 
	{ 
		cout << endl <<"Id: "<< id << "\nName: " << name <<endl; 
	} 
}; 

class Child : private Parent { 
	char course[50]; 
	int fee; 

public: 
	void set_c() 
	{ 
		detail_p(); 
		cout << "Enter the Course Name:"; 
		cin >> course; 
		cout << "Enter the Course Fee:"; 
		cin >> fee; 
	} 

	void display_c() 
	{ 
		display_p(); 
		cout <<"Course: "<< course << "\nFee: " << fee << endl; 
	} 
}; 

int main() 
{ 
	Child c; 
	c.set_c(); 
	c.display_c(); 
	return 0; 
}
