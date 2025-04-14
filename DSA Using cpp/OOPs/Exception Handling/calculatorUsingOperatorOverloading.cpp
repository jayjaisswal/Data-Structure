#include <iostream>
using namespace std;

class Calculator {
private:
    float result;

public:
    Calculator() : result(0) {}

    Calculator operator+(const Calculator& other) {
        Calculator temp;
        temp.result = result + other.result;
        return temp;
    }

    Calculator operator-(const Calculator& other) {
        Calculator temp;
        temp.result = result - other.result;
        return temp;
    }

    Calculator operator*(const Calculator& other) {
        Calculator temp;
        temp.result = result * other.result;
        return temp;
    }

    Calculator operator/(const Calculator& other) {
        if (other.result != 0) {
            Calculator temp;
            temp.result = result / other.result;
            return temp;
        } else {
            cout << "Error: Division by zero." << endl;
            exit(1);
        }
    }

    void setValue(float value) {
        result = value;
    }

    float getResult() {
        return result;
    }
};

int main() {
    Calculator calc1, calc2, result;
    int choice;
    cout << "Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";

    do {
        
        cin >> choice;

        float value1, value2;

        switch (choice) {
            case 1:
                cout << "Enter value for Calculator 1: ";
                cin >> value1;
                calc1.setValue(value1);
                cout << "Enter value for Calculator 2: ";
                cin >> value2;
                calc2.setValue(value2);
                result = calc1 + calc2;
                cout << "Addition Result: " << result.getResult() << endl;
                break;

            case 2:
                cout << "Enter value for Calculator 1: ";
                cin >> value1;
                calc1.setValue(value1);
                cout << "Enter value for Calculator 2: ";
                cin >> value2;
                calc2.setValue(value2);
                result = calc1 - calc2;
                cout << "Subtraction Result: " << result.getResult() << endl;
                break;

            case 3:
                cout << "Enter value for Calculator 1: ";
                cin >> value1;
                calc1.setValue(value1);
                cout << "Enter value for Calculator 2: ";
                cin >> value2;
                calc2.setValue(value2);
                result = calc1 * calc2;
                cout << "multiplication Result: " << result.getResult() << endl;
                break;

            case 4:
                cout << "Enter value for Calculator 1: ";
                cin >> value1;
                calc1.setValue(value1);
                cout << "Enter value for Calculator 2: ";
                cin >> value2;
                calc2.setValue(value2);
                result = calc1 / calc2;
                cout << "division Result: " << result.getResult() << endl;
                break;

            case 5:
                cout << "Exiting the program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
