#include<iostream>
using namespace std;
struct test
{
    int a,b;
};
int main()
{
        struct test t1,t2,t3;
        t1.a=10;
        t1.b=15;
        t2.a=20;
        t2.b=30;
        t3.a=t1.a+t2.a;
        t3.b=t1.b+t2.b;
        printf("\n a of t3 %d\n B of t3 %d",t3.a,t3.b);
        return 0;
}
