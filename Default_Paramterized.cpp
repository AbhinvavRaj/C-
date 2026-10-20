#include <iostream>
using namespace std;
class Student 
{
    int roll;
    string name;
public:
    Student() 
    {
        roll = 0;
        name = "Unknown";
    }
    Student(int r, string n) 
    {
        roll = r;
        name = n;
    }
    void display() 
    {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};
int main() 
{
    Student s1;                       
    Student s2(101, "Aditya");        

    s1.display();
    s2.display();
    return 0;
}
