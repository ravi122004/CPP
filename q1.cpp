// sum of n no.s
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter input n"<<endl;
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;

}