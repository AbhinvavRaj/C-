#include<iostream>
using namespace std;
template<class A>
void add(A a,A b)
{
    A c;
    c=a+b;
    cout<<"Addition is:"<<c<<endl;
}
int main()
{
    int x=10,y=20;
    add(x,y);
    float p=1.5,q=2.5;
    add(p,q);
    return 0;
}