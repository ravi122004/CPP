#include<iostream>
using namespace std;
int main(){
    int billAmount;
    cout<<"Enter bill amount: ";
    cin>>billAmount;
    int n=billAmount;
    int ld;
    int odds=0;
    int evens=0;
    while(n>0){
        ld=n%10;
        if(ld%2==0){
            odds+=ld;
        }else{
            evens+=ld;
        }
        n=n/10;
    
    }
    int discount=odds*evens;
    cout<<"discount on the bill is: "<<discount;
}