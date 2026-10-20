#include<iostream>
using namespace std;
class x
{
    private:
    int a=5;
    friend void show(x);
};
void show(x box)
{
    cout<<box.a<<endl;
}
int main()
{
    x obj;
    show(obj);
    return 0;
}