#include <iostream>
using namespace std;

class SGPA_Calculator
{
private:
    double arr[11];
    int credits[11];
    string subjects[11];
    int totalCredits;

public:
    SGPA_Calculator()
    {
        subjects[0] = "DSA";
        subjects[1] = "OOPs";
        subjects[2] = "DCLD";
        subjects[3] = "DCCN";
        subjects[4] = "PPLE";
        subjects[5] = "DSA-Lab";
        subjects[6] = "OOPs-Lab";
        subjects[7] = "DCCN-Lab";
        subjects[8] = "DCLD-Lab";
        subjects[9] = "Seminar";
        subjects[10] = "Training-1";

        credits[0] = 3;
        credits[1] = 3;
        credits[2] = 3;
        credits[3] = 3;
        credits[4] = 3;
        credits[5] = 1;
        credits[6] = 1;
        credits[7] = 1;
        credits[8] = 1;
        credits[9] = 1;
        credits[10] = 1;

        totalCredits = 21; // Sum of all credits
    }

    void inputMarks()
    {
        for (int i = 0; i < 11; i++)
        {
            cout << "Enter your " << subjects[i] << " marks: ";
            cin >> arr[i];
        }
    }

    // Inside SGPA_Calculator class

double calculateSGPA()
{
    double total = 0;
    for (int i = 0; i < 11; i++)
    {
        if (i >= 5 && i <= 9) // For indices 5 to 8 (inclusive), multiply by 2 instead of 1
        {
            arr[i] = (arr[i] / 50) * 100; // Adjust as needed
        }
        else
        {
            arr[i] = (arr[i] / 100) * 100; // Adjust as needed
        }

        int points = (arr[i] / 10) + 1;
        total += points * credits[i];
    }

    return total / totalCredits;
}

};

int main()
{
    SGPA_Calculator sgpaCalculator;
    sgpaCalculator.inputMarks();
    double sgpa = sgpaCalculator.calculateSGPA();

    cout << "SGPA: " << sgpa << endl;

    return 0;
}
