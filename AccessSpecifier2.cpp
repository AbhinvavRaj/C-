#include<iostream>
using namespace std;
class Demo
{
    protected: int a;
    protected: int b;
    public :
    int c;
    void setAB(int x, int y)
    {
        a=x;
       b=y;
        c=30;
    }
        int getA() const 
        { 
            return a; 
        }                  
        int getB() const 
        { 
          return b;
        } 
    
    void show()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
class child:public Demo
{
   public:
        void change() 
        {
            a = 5;      
            b = 10; 
            c=30;
        }
};
int main()
{
    Demo d;
    d.setAB(5, 10);
    d.show();                                                                                                                                                                                                                                                                                                                       
    cout << d.getA();   
    cout << d.getB(); 
    cout<<d.c;
}