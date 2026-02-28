#include<iostream>
using namespace std;
int main(){
    int first,end;
    cout<<"Enter range: ";
    cin>>first>>end;
    int minPrime,maxPrime;
    for(int i=first;i<=end;i++){
        bool flag=true;
        for(int j=2;j<=abs(i)/2;j++){
            if(i%j==0){
                flag =false;
                break;
            }
        }if(flag==true){
            minPrime=i;
            break;
        }
    }
    for(int i=end;i>=first;i--){
        bool flag1=true;
        for(int j=abs(i)/2;j>=2;j--){
            if(i%j==0){
                flag1 =false;
                break;
            }
        }if(flag1==true){
            maxPrime=i;
            break;
        }
    }
    cout<<"minPrime is: "<<minPrime<<endl;
    cout<<"maxPrime is: "<<maxPrime<<end;
    cout<<"OTP is: "<<minPrime+maxPrime;


}