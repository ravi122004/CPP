#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}
void displayRec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    head=head->next;
    displayRec(head);
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;     
    display(a); 
    //displayRec(a);
    cout<<endl; 
    Node* temp=a;
    temp=temp->next;;
    a=temp;
    display(a);
    return 0;

    

}