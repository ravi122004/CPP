#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter base and exponent"<<endl;
    cin>>a>>b;

    int pow=1;
    for(int i=0;i<b;i++){
        pow*=a;
    }
    cout<<pow;
    return 0;
}