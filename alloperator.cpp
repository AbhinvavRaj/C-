#include<iostream>
using namespace std;
class alloperator
{
    float no;
    public:alloperator()
    {
    }   
        void getdata()
        {
            cout<<"Enter the number"<<endl;
            cin>>no;
        }
        void putdata()
        {
            cout<<"Answer is"<<no<<endl;
        }
        alloperator operator+(alloperator b);
        alloperator operator-(alloperator b);
        alloperator operator*(alloperator b);
        alloperator operator/(alloperator b);
    };
    alloperator alloperator::operator+(alloperator b)
    {
        alloperator temp;
        temp.no=no + b.no;
        return(temp);
    }  
    alloperator alloperator::operator-(alloperator b)
    {
        alloperator temp;
        temp.no=no - b.no;
        return(temp);
    }  
    alloperator alloperator::operator*(alloperator b)
    {
        alloperator temp;
        temp.no=no * b.no;
        return(temp);
    }  
    alloperator alloperator::operator/(alloperator b)
    {
        alloperator temp;
        if (b.no != 0)
        temp.no = no / b.no;
    else {
        cout << "Error! Division by zero." << endl;
        temp.no = 0;
    }
    return temp;
}
    int main()
    {
            alloperator a1,a2,a3,a4,a5,a6;
            a1.getdata();
            a2.getdata();
            a3=a1+a2;
            a3.putdata();
            a4=a1-a2;
            a4.putdata();
            a5=a1*a2;
            a5.putdata();
            a6=a1/a2;
            a6.putdata();
            return 0;
    }

