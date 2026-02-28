#include <iostream>
using namespace std;

// Base class
class Student {
public:
    void info() {
        cout << "I am a student." << endl;
    }

    void study() {
        cout << "I study common subjects." << endl;
    }
};

// Derived class 1
class Mechanical : public Student {
public:
    void study() {
        cout << "I study Thermodynamics and Machines." << endl;
    }
};

// Derived class 2
class Architecture : public Student {
public:
    void study() {
        cout << "I study Building Design and Drawing." << endl;
    }
};

int main() {
    Mechanical m;
    Architecture a;

    m.info();
    m.study();

    cout << endl;

    a.info();
    a.study();

    return 0;
}
