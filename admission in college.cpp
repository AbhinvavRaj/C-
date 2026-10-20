#include<iostream>
#include<string>
using namespace std;
int main()
{
    string stream;
    int marks;
    cout<<"Enter your stream(Science/Commerce):";
    cin>>stream;
    cout<<"Enter your marks:";
    cin>>marks;
    if(stream == "Science" || stream == "Science")
    {
        if(marks>=90)
            cout<<"Eligible for Engineering";
        else
            cout<<"not eligible for Engineering";

    }
   else if(stream == "Commerce" || stream == "commerce")
   {
       if(marks>90)
        cout<<"Eligible for B.com(Hons)";
       else
        cout<<"Not eligible for b.com(hons)";
    }
   else
   {
       if(marks<90)
          cout<<"choose a suitable course";
       else
        cout<<"try next year";
   }
   return 0;
}
