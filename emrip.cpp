// a no. is called an emirp if it is a prime number that results in a different prime number when its decimal digits are reversed.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag =true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag =false;
            break;
        }
    }
    if(flag==false){
        cout<<"No. is no emrip";
    }else{
        
    }
    
}
