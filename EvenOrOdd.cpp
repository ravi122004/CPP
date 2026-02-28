#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"enter input "<<endl;
    cin>>n;
    if ((n / 2) * 2 == n){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
    return 0;

}