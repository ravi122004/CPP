#include<iostream>
using namespace std;
int main(){
    int n, i, flag=0;
    cout<<"Enter a decimal number: ";
    cin>>n;
    if(n==0){
        cout<<"Binary: 0"<<endl;
        return 0;
    }
    int binary[32];         
    for(i=0; n>0; i++){
        binary[i] = n % 2;
        n = n / 2;
    }
    cout<<"Binary: ";
    for(i = i - 1; i >= 0; i--){
        cout<<binary[i];            
    }
    cout<<endl;
    return 0;       

}