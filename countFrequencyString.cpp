#include<iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[26] = {0};

    for(int i = 0; i < str.size(); i++){
        freq[str[i] - 'a']++;   
    }

    cout << "Character frequencies:\n";
    for(int i = 0; i < 26; i++){
        if(freq[i] > 0){
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }
}
    