#include <iostream>
using namespace std;

// Call by Value
int square1(int n) {
    cout << "Address of n in square1(): " << &n << endl;
    n = n * n;
    return n;
}

// Call by Pointer
void square2(int* n) {
    cout << "Address of n in square2(): " << n << endl;
    *n = (*n) * (*n);
}

// Call by Reference
void square3(int& n) {
    cout << "Address of n in square3(): " << &n << endl;
    n = n * n;
}

void func1() {
    int n1 = 8;
    cout << "\nAddress of n1 in main(): " << &n1 << endl;
    cout << "Square of n1: " << square1(n1) << endl;
    cout << "No change in n1: " << n1 << endl;

    int n2 = 8;
    cout << "\nAddress of n2 in main(): " << &n2 << endl;
    square2(&n2);
    cout << "Change reflected in n2: " << n2 << endl;

    int n3 = 8;
    cout << "\nAddress of n3 in main(): " << &n3 << endl;
    square3(n3);
    cout << "Change reflected in n3: " << n3 << endl;
}

int main() {
    func1();
    return 0;
}
