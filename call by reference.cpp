#include<iostream>
using namespace std;
void test(int*x , int y)
{
    *x+=5;//change value at address(modifies original 'a')
    y*=2;//change local copy(does not modifies 'b')
    cout<<*x<<y;
}
int main()
{
    int a= 100 , b = 200;
    test(&a,b);
    cout<<a<<b;
}
