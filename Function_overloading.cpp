#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
float add(float a, float b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 10 and 20 (int): " << add(10, 20) << endl;
    cout << "Sum of 3.5 and 2.5 (float): " << add(3.5f, 2.5f) << endl;
    cout << "Sum of 1, 2 and 3 (int): " << add(1, 2, 3) << endl;
    return 0;
}
