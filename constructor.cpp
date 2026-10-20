#include <iostream>
using namespace std;
class base 
{
    int val1, val2;
public:
    void get(); 
    friend float mean(base ob);
};
void base::get() 
{
    cout << "Enter two numbers: ";
    cin >> val1 >> val2;
}
float mean(base ob) {
    return float(ob.val1 + ob.val2) / 2;
}
int main() 
{ 
    base obj;
    obj.get(); 
    cout << "\nMean value is: " << mean(obj) << endl; 
    return 0; 
}