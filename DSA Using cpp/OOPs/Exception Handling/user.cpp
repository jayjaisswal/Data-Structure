#include <iostream>
#include <string>

using namespace std;

int main() {
    // Define the input string
    string inputString = "C++PROGRAMMING";

    // Extract and print each character from the string
    cout << "Extracted characters from the string: ";
    for (char character : inputString) {
        cout << character << " ";
          
    }

    cout << endl;

 return 0;
}