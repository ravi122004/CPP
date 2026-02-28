#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

void insert(ListNode*& head, int val) {
    ListNode* newNode = new ListNode(val);
    if (!head) {
        head = newNode;
        return;
    }
    ListNode* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Find length
int getLength(ListNode* head) {
    int len = 0;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

// Pad shorter list with zeros at front
ListNode* padList(ListNode* head, int diff) {
    while (diff--) {
        ListNode* newNode = new ListNode(0);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

// Recursive addition
ListNode* addHelper(ListNode* l1, ListNode* l2, int &carry) {
    if (!l1 && !l2)
        return NULL;

    ListNode* nextNode = addHelper(l1->next, l2->next, carry);

    int sum = l1->val + l2->val + carry;
    carry = sum / 10;

    ListNode* curr = new ListNode(sum % 10);
    curr->next = nextNode;

    return curr;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    int len1 = getLength(l1);
    int len2 = getLength(l2);

    if (len1 < len2)
        l1 = padList(l1, len2 - len1);
    else
        l2 = padList(l2, len1 - len2);

    int carry = 0;
    ListNode* result = addHelper(l1, l2, carry);

    if (carry) {
        ListNode* newNode = new ListNode(carry);
        newNode->next = result;
        result = newNode;
    }

    // Remove leading zeros (except if single node)
    while (result && result->val == 0 && result->next)
        result = result->next;

    return result;
}

int main() {

    ListNode* head1 = NULL;
    insert(head1, 0);
    insert(head1, 0);
    insert(head1, 2);
    insert(head1, 3);   // 0023

    ListNode* head2 = NULL;
    insert(head2, 0);
    insert(head2, 8);
    insert(head2, 1);   // 081

    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    ListNode* result = addTwoNumbers(head1, head2);

    cout << "Sum: ";
    printList(result);

    return 0;
}
