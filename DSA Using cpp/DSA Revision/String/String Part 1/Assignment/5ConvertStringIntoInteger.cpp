#include <iostream>
using namespace std;

int stringToInt(string str)
{
    int num = 0;
    int sign = 1;
    int i = 0;

    
    // Check if the number is negative
    if (str[0] == '-')
    {
        sign = -1; // Set the sign to negative
        i = 1;     // Start converting from the next character
    }

    // Loop through each character in the string
    for (i; i < str.length(); i++)
    {
        num = num * 10 + (str[i] - '0'); // Convert char to digit and add to num
    }

    return num * sign; // Apply the sign to the number
}

int main()
{
    string input;
    cout << "Enter a string of length less than 10: ";
    cin >> input;

    int result = stringToInt(input);
    cout << "The converted integer is: " << result << endl;

    return 0;
}
