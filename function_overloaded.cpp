#include<iostream>//This is the header file.
using namespace std;//This is the standard library which contain all component of c++
int add(int x, int y)
{
    return x+y;
}
double add(double x, double y)
{
    return x+y;
}
int main()
{
    std::cout<<add(23,34)<<endl;
    std::cout<<add(23.4,76.9)<<endl;
    return 0;
}