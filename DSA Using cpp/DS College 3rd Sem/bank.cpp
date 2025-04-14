#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(const string& person_name, int person_age) {
        name = person_name;
        age = person_age;
    }

    // Copy constructor
    Person(const Person& other) {
        name = other.name;
        age = other.age;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create a Person object
    Person person1("Jay", 20);

    // Create a new Person object by copying person1
    Person person2 = person1;

    cout << "Person 1 Information:" << endl;
    person1.displayInfo();

    cout << "Person 2 Information (Copy of Person 1):" << endl;
    person2.displayInfo();

    return 0;
}
