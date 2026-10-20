#include<iostream>
using namespace std;
class Base
{
    public:
    void show()
    {
        cout<<"Base class";
    }
};
class derived:public Base
{
    public:
    coid show()
    {
        cout<<"Derived class";
    }
};
void main()
{
    base *b;
    Derived d;
    b=&d;
    b->show();
    getch();
}