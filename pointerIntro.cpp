#include<iostream>
using namespace std;
int main(){
    int number=30;
    int *p;
    p=&number;
    cout<<"Address of number variable is: "<<&number<<endl;
    cout<<"Value of p variable is: "<<p<<endl;
    cout<<"value of *p variable is: "<<*p<<endl;
    cout<<"addres of p ptr is: "<<&p<<endl;
    return 0;
}