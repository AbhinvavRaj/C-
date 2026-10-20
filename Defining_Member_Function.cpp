#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    float marks;
    public:
    void putdata(int a, float b)
    {
        rollno=a;
        marks=b;
    }
    void display()
    {
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Marks:"<<marks;
    }
};
int main()
{
    student s1;
    s1.putdata(10,25.5);
    s1.display();
}