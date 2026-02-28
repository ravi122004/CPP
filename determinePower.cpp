#include<iostream>
using namespace std;
int main(){
    int base,result;
    int exp;
    bool flag=true;
    cout<<"Enter base and result"<<endl;
    cin>>base>>result;
    exp=0;
    while(result>1){
        if(result%base!=0){
            flag=false;
            break;
        }
        result=result/base;
        exp++;
    }
    if(flag==false){
        cout<<"No such exponent exists"<<endl;
        return 0;
    }else{
        cout<<"exponent is "<<exp<<endl;
    }

}
    