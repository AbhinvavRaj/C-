#include <iostream>
using namespace std;
class Adder {
    public:
    int add(int a, int b) {
        return a + b;
    }
};
int main() 
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Adder obj;
    cout << "Sum: " << obj.add(a, b) << endl;
    return 0;
}
