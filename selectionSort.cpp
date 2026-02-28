#include<iostream>
using namespace std;
int main(){
    int arr[5]={64,25,12,22,11};
    int n=5;
    for(int i=0;i<n-1;i++){
        int min_idx=-1;
        int min=INT_MAX;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}