#include<iostream>
using namespace std;
int main(){
    int n=3;
    int m=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<m++;
        }
        cout<<endl;
    }
     
}