#include<iostream>
using namespace std;
class MyQueue(){
    int *arr;
    int size;
    int capacity;
    public:
    MYQueue(int c){
        capacity=c;
        arr=new arr[capacity];
        size=0;

    }
    bool isEmpty(){
        return size==0;
    }
    bool isFull(){
        return size==capacity;
    }
    void enque(int a){
        if(isFull){
            cout<<"Queue overflow ";
        }
        arr[size++]=a;
    }
}
int main(){
    MyQueue q(3);

}