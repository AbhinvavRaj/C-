#include<iostream>
#include<string>
using namespace std;
class Student
{
    string name;
    int rollno;
    public:
    Student(int r, string n)
    {
        name=n;
        rollno=r;
    }
    Student(const Student &s)
    {
        rollno=s.rollno;
        name=s.name;
    }
    void display()
    {
        cout<<"Roll no:"<<rollno<<endl<<"Name:"<<name<<endl;
    }
};
int main()
{
    Student s1(112,"John");
    s1.display();
    Student s2(s1);
    s2.display();
    return 0;
}