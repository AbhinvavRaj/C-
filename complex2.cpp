#include<iostream>
class complex
{
    int r,j;
    public:
    void input();
    void print();
    complex add(complex c);
};
void complex:: input()
{
    cout<<"Enter real and imaginary values of complex number"<<endl;
    cin>>i>>r;
    void complex:: prin()
    cout<<endl<<"Real value"<<r<<endl<<"imaginary value="<<i;
}
complex complex::add(complex c)
{
    complex i;
    t.r=r+c.r;
    t.i=i+c,c;
    return t;
}
void main()
{
    complex obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    obj3=obj1.add(obj2);
    obj1.print();
    obj2.print();
    obj3.print();
    getch();

}
