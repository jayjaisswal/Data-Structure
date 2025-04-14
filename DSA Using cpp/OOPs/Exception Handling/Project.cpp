#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Student {
protected:
    string name;
    int age;

public:
    Student(const string& n, int a) : name(n), age(a) {}

    virtual void displayInfo() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }

    virtual void saveToFile(ofstream& outFile) const {
        outFile << name << " " << age << endl;
    }

    virtual ~Student() {}
};

class RegularStudent : public Student {
private:
    int semester;

public:
    RegularStudent(const string& n, int a, int s) : Student(n, a), semester(s) {}

    void displayInfo() const override {
        Student::displayInfo();
        cout << "Semester: " << semester << endl;
    }

    void saveToFile(ofstream& outFile) const override {
        outFile << "Regular " << name << " " << age << " " << semester << endl;
    }
};

class TransferStudent : public Student {
private:
    string previousSchool;

public:
    TransferStudent(const string& n, int a, const string& school) : Student(n, a), previousSchool(school) {}

    void displayInfo() const override {
        Student::displayInfo();
        cout << "Previous School: " << previousSchool << endl;
    }

    void saveToFile(ofstream& outFile) const override {
        outFile << "Transfer " << name << " " << age << " " << previousSchool << endl;
    }
};

void displayMenu() {
    cout << "\n1. Add Regular Student\n2. Add Transfer Student\n3. Display All Students\n4. Save to File\n5. Exit\n";
}

int main() {
    ofstream outFile("student_data.txt", ios::app);
    if (!outFile.is_open()) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    try {
        vector<Student*> students;
        int choice;

        while (choice !=5) {
            displayMenu();

            
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    string name;
                    int age, semester;

                    cout << "Enter name: ";
                    cin >> name;
                    cout << "Enter age: ";
                    cin >> age;
                    cout << "Enter semester: ";
                    cin >> semester;

                    students.push_back(new RegularStudent(name, age, semester));
                    break;
                }
                case 2: {
                    string name, school;
                    int age;

                    cout << "Enter name: ";
                    cin >> name;
                    cout << "Enter age: ";
                    cin >> age;
                    cout << "Enter previous school: ";
                    cin >> school;

                    students.push_back(new TransferStudent(name, age, school));
                    break;
                }
                case 3: {
                    cout << "Displaying all students:\n";
                    for (const auto& student : students) {
                        student->displayInfo();
                    }
                    break;
                }
                case 4: {
                    cout << "Saving to file...\n";
                    for (const auto& student : students) {
                        student->saveToFile(outFile);
                    }
                    cout << "Data saved to file.\n";
                    break;
                }
                case 5: {
                    cout << "Exiting...\n";
                    outFile.close();
                    for (const auto& student : students) {
                        delete student;
                    }
                    return 0;
                }
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        }
    } catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    outFile.close();

    return 0;
}