#include<iostream>
using namespace std;
class Array
{
    int*data;
    int size;
    public:
    Array(int s)
    {
        size=s;
        data=new int[size];
        cout<<"Array of size"<<size<<"created"<<endl;
    }
    ~Array()
    {
        delete[]data;
        cout<<"Array of size"<<size<<"deleted"<<endl;
    }
};
int main()
{
    Array arr1(5);
    return 0;
}