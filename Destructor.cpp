#include<iostream>
using namespace std;
class Demo
{
    public :
        Demo();
        ~Demo();
};
       Demo::Demo()
       {
           cout <<"Inside Constructor"<<endl;
       }
       Demo::~Demo()
       {
          cout <<"Inside Destructor"<<endl;
       }
int main()
{
    Demo d1;
    Demo d2;
    return 0;
}