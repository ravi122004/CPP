// two pointer approach order will not stable
// #include<iostream>  
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int m=0;
//     int h=n-1;
    

//     while(m<=h){
//         if(arr[m]%2==0){
//             m++;
//         }else{
//             int temp=arr[m];
//             arr[m]=arr[h];
//             arr[h]=temp;
//             h--;
            
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
     

// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int temp[n];
    int k = 0;

    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            temp[k++] = arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i] % 2 != 0){
            temp[k++] = arr[i];
        }
    }

    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
