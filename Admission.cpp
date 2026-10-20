#include<iostream>
#include<string>
using namespace std;

int main()
{
    string stream;
    int marks;

    cout << "Enter your stream (Science/Commerce): ";
    cin >> stream;

    cout << "Enter your marks: ";
    cin >> marks;

    if (stream == "Science" || stream == "science") {
        if (marks > 90)
            cout << "Eligible for Engineering";
        else
            cout << "Not eligible for Engineering";
    }
    else if (stream == "Commerce" || stream == "commerce") {
        if (marks > 90)
            cout << "Eligible for B.com(Hons)";
        else
            cout << "Not Eligible for B.com(Hons)";
    }
    else {
        if (marks < 90)
            cout << "Choose a suitable course";
        else
            cout << "Try next year";
    }

    return 0;
}
