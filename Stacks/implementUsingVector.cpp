#include <iostream>
#include <vector>
using namespace std;

class StackVector {
    vector<int> v;

public:
    void push(int x) {
        v.push_back(x);
    }

    void pop() {
        if (v.empty()) {
            cout << "Stack Underflow\n";
            return;
        }
        v.pop_back();
    }

    int peek() {
        if (v.empty()) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return v.back();
    }

    bool isEmpty() {
        return v.empty();
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return;
        }
        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    StackVector s;

    s.push(5);
    s.push(15);
    s.push(25);

    cout << "Stack elements: ";
    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "After pop: ";
    s.display();

    return 0;
}
 