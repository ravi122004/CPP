#include<iostream>
using namespace std;    
int main(){
    int a=10;
    int b=20;
    cout<<"Before swap: "<<endl;
    cout<<"a: "<<a<<", b: "<<b<<endl;
    int *p1=&a;
    int *p2=&b;
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"After swap: "<<endl;
    cout<<"a: "<<a<<", b: "<<b<<endl;
    return 0;
}