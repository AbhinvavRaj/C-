#include<iostream>
using namespace std;
/*class distance
{
    private:
    int memter;
    public:
    friend int func(distance);
};
int func(distance d)
{
    d.meter=10;
    return d.meter;
}
void main()
{
    distance d;
    cout<< "Distance"<<func(d);
    return 0;
}*/

/*class base
{
    int val1,val2;
    public:
    void  get();
    private:
    friend float mean(base ob);
};
void base::get()
{
    cout<<"Enter two number"<<endl;
    cin>>val1>>val2;
}
float mean(base ob)
{
    return float(ob.val1+ob.val2)/2;
}
vpid main()
{
    base obj;
    obj.get();
    cout<<"\n mean value is:"<<mean(obj);
    return 0;
}*/

class student
{
    char name[10];
    int marks;
    public:
    void getName();
    {
        get(name)
    }
    void getMarks()
    {
        cin>>marks;
    }
    void display()
    {
        cout<<"Name"<<endl;
        cout<<"Marks"<<endl;
    }
};
int main()
{
    student st[5];
    int i,n;
    cout<<"\n Enter the range";
    cin>>n;
}