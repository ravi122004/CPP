#include<iostream>
using namespace std;
int main(){
    string word;
    cout<<"Enter word: ";
    cin>>word;
    int count=0;
    for(int i=0;i<word.size();i++){
        if((int(word[i])>=32 && int(word[i])<=47 )|| (int(word[i])>=58 && int(word[i])<=64)||(int(word[i])>=91 && int(word[i])<=96)||(int(word[i])>=123 && int(word[i])<=126 )){
            count++;
        }
    }
    cout<<count;

}