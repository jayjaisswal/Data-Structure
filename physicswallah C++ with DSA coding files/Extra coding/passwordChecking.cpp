#include <iostream>
#include <string>

using namespace std;

int main() {
    const string correctPassword = "mySecretPassword";
    string enteredPassword;
    
    cout << "Please enter the password: ";
    cin >> enteredPassword;
    
    while (enteredPassword != correctPassword) {
        cout << "Incorrect password. Try again: ";
        cin >> enteredPassword;
    }
    
    cout << "Correct password entered. Access granted!" << endl;
    
    return 0;
}
