#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "Teacher is teaching in the classroom." << endl;
    }
};

class SportsPerson {
public:
    void play() {
        cout << "SportsPerson is playing on the ground." << endl;
    }
};

class Student : public Teacher, public SportsPerson {
public:
    void study() {
        cout << "Student is studying for exams." << endl;
    }
};

int main() {
    Student s;

    s.teach();
    s.play();
    s.study();

    return 0;
}
