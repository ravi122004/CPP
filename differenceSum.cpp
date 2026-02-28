#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int diffSum=0;
    for(int i=0;i<4;i++){
        diffSum+=abs(arr[i]-arr[i+1]);
    }
    cout<<"The difference sum is: "<<diffSum<<endl;
}