#include<iostream>
#include<string>
using namespace std;
class student
{
    string name;
    int age;
    public:
    void setdata( string n, int a)
    {
        name=n;
        age=a;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
    }
};
int main()
{
    student s[2];
    s[0].setdata("Abhinav",20);
    s[1].setdata("shubham",21);
    for(int i=0;i<2;i++)
    {
        s[i].display();
    }
    return 0;
}