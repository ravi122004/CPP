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

// Insert at end
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

// Partition function
Node* partitionList(Node* head, int x) {
    Node *lessHead = NULL, *lessTail = NULL;
    Node *equalHead = NULL, *equalTail = NULL;
    Node *greaterHead = NULL, *greaterTail = NULL;

    Node* curr = head;

    while (curr != NULL) {
        if (curr->data < x) {
            if (!lessHead) {
                lessHead = lessTail = curr;
            } else {
                lessTail->next = curr;
                lessTail = curr;
            }
        }
        else if (curr->data == x) {
            if (!equalHead) {
                equalHead = equalTail = curr;
            } else {
                equalTail->next = curr;
                equalTail = curr;
            }
        }
        else {
            if (!greaterHead) {
                greaterHead = greaterTail = curr;
            } else {
                greaterTail->next = curr;
                greaterTail = curr;
            }
        }

        curr = curr->next;
    }

    // Connect three lists

    if (greaterTail) greaterTail->next = NULL;

    if (equalTail) equalTail->next = greaterHead;

    if (lessTail) {
        lessTail->next = (equalHead) ? equalHead : greaterHead;
        return lessHead;
    }

    return (equalHead) ? equalHead : greaterHead;
}

// Print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    int arr[] = {1, 4, 3, 2, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        insert(head, arr[i]);
    }

    int x = 3;

    cout << "Original List: ";
    printList(head);

    head = partitionList(head, x);

    cout << "Partitioned List: ";
    printList(head);

    return 0;
}
