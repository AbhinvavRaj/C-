#include<iostream>
#include<string>
using namespace std;
class Employee
{
    int id;
    string name;
    public:
    Employee()
    {
        id=0; name="unknown";
    }
    void display()
    {
        cout<<"ID:"<<id<<"Name:"<<name<<endl;
    }
};
int main()
{
    Employee s;
    s.display();
    return 0;
}