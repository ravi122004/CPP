#include<iostream>
using namespace std;
int main(){
    int base;
    cout<<"enter base: "<<endl;
    cin>>base;
    int result;
    cout<<"enter result: "<<endl;
    cin>>result;
    int exp=0;
    int n;
    int temp=1;
    cout<<"Enter result: "<<endl;
    for(int i=0;temp<=result;i++){
        temp=(temp*base);
        exp++;
        if(temp==result){
            
            break;
        }
    }
    cout<<exp;
}

