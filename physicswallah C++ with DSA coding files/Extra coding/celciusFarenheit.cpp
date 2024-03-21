#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    double temperature, result;

    do {
        cout << "Menu:" << endl;
        cout << "1. Convert Celsius to Fahrenheit" << endl;
        cout << "2. Convert Fahrenheit to Celsius" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temperature;
                result = celsiusToFahrenheit(temperature);
                cout << "Temperature in Fahrenheit: " << result << "F" << endl;
                break;
            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temperature;
                result = fahrenheitToCelsius(temperature);
                cout << "Temperature in Celsius: " << result << "C" << endl;
                break;
            case 3:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }

    } while (choice != 3);

    return 0;
}
