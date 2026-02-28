#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    string str2="";
    for(int i=str.size()-1;i>=0;i--){
        str2+=str[i];
    }
    for(int i=0;i<str2.size();i++){
        if(str2[i]!=str[i]){
            cout<<"The string is not a palindrome"<<endl;
            return 0;
        }
    }
    cout<<"The string is a palindrome"<<endl;
}
    