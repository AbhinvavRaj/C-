#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    // Copy Constructor
    Student(const Student &S) {
        roll = S.roll;
        name = S.name;
    }

    // Function to display student details
    void display() {
        cout << "Roll No: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student S1(101, "Amit");   // Parameterized constructor called
    Student S2 = S1;           // Copy constructor called

    cout << "Student 1 details:" << endl;
    S1.display();

    cout << "Student 2 details (copied from S1):" << endl;
    S2.display();

    return 0;
}
