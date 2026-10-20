#include<iostream>
using namespace std;
class Demo
{
    private: int a;
    private: int b;
    public :
    int c;
    void set()
    {
        a=10;
       b=20;
        c=30;
    }
    void show()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
class child:public Demo
{
   public:
    void access()
    {
        //a=10;
        //b=20;
        c=30;
    }
};
int main()
{
    Demo d;
    d.set();
    d.show();
    //d.a=5;
    //d.b=10;
    d.c=40;
    cout<<d.c;
}