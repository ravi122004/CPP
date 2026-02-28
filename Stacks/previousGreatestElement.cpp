#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    vector<int>pge(n);
    pge[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            pge[i]=-1;
        }else{
            pge[i]=st.top();
        }
        st.push(i);
        
    } 
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }



}