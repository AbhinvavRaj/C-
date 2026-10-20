#include <iostream>
using namespace std;

class Complex {
    int r, j;   // r = real part, j = imaginary part
public:
    void input();
    void print();
    Complex add(Complex c);
};

void Complex::input() {
    cout << "Enter real and imaginary values of complex number: ";
    cin >> r >> j;
}

void Complex::print() {
    cout << "Complex number = " << r << " + " << j << "i" << endl;
}

Complex Complex::add(Complex c) {
    Complex t;
    t.r = r + c.r;   // add real parts
    t.j = j + c.j;   // add imaginary parts
    return t;
}

int main() {
    Complex obj1, obj2, obj3;

    obj1.input();
    obj2.input();

    obj3 = obj1.add(obj2);

    cout << "\nFirst number: ";
    obj1.print();

    cout << "Second number: ";
    obj2.print();

    cout << "Sum: ";
    obj3.print();

    return 0;
}