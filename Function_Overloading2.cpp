#include <iostream>
using namespace std;
void display(int a) {
    cout << "Displaying int: " << a << endl;
}
void display(double b) {
    cout << "Displaying double: " << b << endl;
}
void display(int a, double b) {
    cout << "Displaying both: int " << a << " and double " << b << endl;
}
int main() {
    display(10);
    display(5.5);
    display(10, 5.5);
    return 0;
}