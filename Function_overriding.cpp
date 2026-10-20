#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};
class Derived : public Base {
public:
    void show() override {  // overrides the Base class function
        cout << "Derived class show function" << endl;
    }
};
int main() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show();  // Calls Derived's show() due to overriding
    return 0;
}