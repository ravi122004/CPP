#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        bool isPrime=true;
        if(i<=1){
            isPrime=false;
        }else{
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
