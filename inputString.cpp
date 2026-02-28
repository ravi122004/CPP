#include<iostream>
using namespace std;
int main(){
    string w;
    cout<<"Enter word: ";
    cin>>w;
    int count=0;
    for(int i=0;i<w.size();i++){
        if(w[i]=='a'|| w[i]=='e'|| w[i]=='i' || w[i]== 'o' || w[i] == 'u'|| w[i]=='A'|| w[i]=='E'|| w[i]=='I' || w[i] == 'O' || w[i] == 'U'){
            count++;
        }
        
    }
    cout<<count<<" no. of vowel present";
}