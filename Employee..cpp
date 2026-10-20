#include<iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a, int b, int c);
    void getdata();
};
void employee:: setdata(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
void employee:: getdata()
{
    cout <<"The value of a is:"<<a<<endl;
    cout <<"The value of b is:"<<b<<endl;
    cout <<"The value of c is:"<<c<<endl;
}
int main()
{
    employee Abhinav;
    Abhinav.setdata(22,34,67);
    Abhinav.d=1;
    Abhinav.e=34;
    Abhinav.getdata();
    return 0;
}