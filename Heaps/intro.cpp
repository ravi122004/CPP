 
#include<iostream>
using namespace std;
class maxHeap{
    public: 
    int arr[50];
    int idx;
    maxHeap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    int push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=1){
            int parent=i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
        }
    }
};
int main(){

}