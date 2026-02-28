#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. element: "; 
    cin>>n;
    int arr[n];
    
    cout<<"Enter elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"Sorted Elemnt is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}