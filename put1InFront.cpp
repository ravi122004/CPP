#include<iostream>  
using namespace std;
int main(){
    int arr[4]={0,1,1,0};
 
    // int l=0;
    int m=0;
    int h=3;
    while(m<=h){
        if(arr[m]==1){
            int temp=arr[m];
            arr[m]=arr[h];
            arr[h]=temp;
            h--;
        }else if(arr[m]==0){
            m++;
        }
    }
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }   

}