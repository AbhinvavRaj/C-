#include<iostream>
using namespace std;
int main()
{
    int number, sum=0;
    do{
        cout<<"enter a number(0 to quit):";
        cin>>number;
        sum+=number;
    }while(number!=0);
    cout<<"The total sum is:"<<sum<<endl;
    return 0;
}