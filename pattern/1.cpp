#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            if(i==n-1){
                cout<<"break";
                break;
            }
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
