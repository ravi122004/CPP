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
void extractToArray(Node* head,int arr[],int n){
    Node* temp=head;
    for(int i=0;i<n;i++){
        arr[i]=temp->val;
        temp=temp->next;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;     
    //display(a); 
    //displayRec(a);
    extractToArray(a,new int[4],4);
    cout<<endl;
    
    //display(a);
    
    return 0;

    

}