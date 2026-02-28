#include<iostream>
using namespace std;
int main(){
    string binaryString;
    cout<<"Enter a binary number: "<<endl;
    cin>>binaryString;
    int decimalValue=0;
    int length=binaryString.length();
    for(int i=0;i<length;i++){
        if(binaryString[length-1-i]=='1'){
            decimalValue+= (1<<i); // 2^i using bitwise shift
        }
    }
    cout<<"The decimal equivalent is: "<<decimalValue<<endl;
}