#include <iostream>

using namespace std;

int main() {
    try {
        cout << "Outer try block" << endl;

        try {
            cout << "Inner try block" << endl;

            // Simulate an exception in the inner try block
            throw 42;
        } catch (int innerException) {
            cout << "Caught inner exception: " << innerException << endl;
            // Handle or rethrow the exception if needed
        }

        // Simulate another exception in the outer try block
        throw 'a';

    } catch (char outerException) {
        cout << "Caught outer exception: " << outerException << endl;
        // Handle or rethrow the exception if needed
    } catch (...) {
        cout << "Unhandled exception caught" << endl;
    }

    return 0;
}
