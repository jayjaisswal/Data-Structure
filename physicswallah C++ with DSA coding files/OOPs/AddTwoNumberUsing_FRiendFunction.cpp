#include<iostream>

class NumberAdder{
private:
    int num1;
public:
    // Alternative way to initialize num1 using member initializer list
    NumberAdder() : num1{0} {}

    // Declaration of the friend function
    friend int addNumbers(NumberAdder obj1, int num2);
};

// Definition of the friend function
int addNumbers(NumberAdder obj1, int num2) {
    // Accessing private member of the class
    int sum = obj1.num1 + num2;
    return sum;
}

int main() {
    using namespace std; // Using namespace std directive

    NumberAdder obj;
    
    cout << "Enter the first number: ";
    cin >> obj.num1;

    int num2;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calling the friend function
    int result = addNumbers(obj, num2);

    cout << "Sum: " << result << endl;

    return 0;
}
