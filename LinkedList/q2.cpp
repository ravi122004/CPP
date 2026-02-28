#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insert(Node*& head, int val) {
    if (head == NULL) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new Node(val);
}

void skipMdeleteN(Node*& head, int m, int n) {
    if (head == NULL || m <= 0) return;

    Node* curr = head;

    for (int i = 1; i < m && curr != NULL; i++) {
        curr = curr->next;
    }

    if (curr == NULL) return;

    Node* temp = curr->next;
    for (int i = 0; i < n && temp != NULL; i++) {
        Node* del = temp;
        temp = temp->next;
        delete del;
    }

    curr->next = temp;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    int arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        insert(head, arr[i]);
    }

    int m = 3;
    int n = 2;

    cout << "Original List: ";
    printList(head);

    skipMdeleteN(head, m, n);

    cout << "Modified List: ";
    printList(head);

    return 0;
}
