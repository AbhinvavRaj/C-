#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}
double add(float a, float b)
{
    return a+b;
}
int main()
{
    cout<<add(20,25)<<endl;
    cout<<add(12.5f,15.5f)<<endl;
    return 0;
}