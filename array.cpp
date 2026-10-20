#include<iostream>
using namespace std;
int i;
void printarray(int arr[], int size)

{
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main ()
{
    int number[]={10,20,30,40,50};
    int size=5;
    printarray(number, size);
    return 0;
}