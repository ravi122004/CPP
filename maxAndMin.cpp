#include<iostream>
using namespace std;
int main(){
    int arr[]={7,8,6,3,2,10,9,1};
    // int min=INT_MAX;
    // int max=INT_MIN;
    // for(int i=0;i<8;i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    //     if(arr[i]<min){
    //         min=arr[i];
    //     }
    // }
    // cout<<"minimum element: "<<min<<endl;
    // cout<<"maximum element: "<<max<<endl;
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<8;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2 && arr[i]!=max1){
            max2=arr[i];
        }
    }
    cout<<"maximum element: "<<max1<<endl;
    cout<<"second maximum element: "<<max2<<endl;
}