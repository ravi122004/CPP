#include <iostream>
#include <string>
using namespace std;

int findClosingBracket(string s, int index) {
    
    if (s[index] != '[')
        return -1;   

    int count = 0;

    for (int i = index; i < s.length(); i++) {
        
        if (s[i] == '[')
            count++;
        else if (s[i] == ']')
            count--;

        if (count == 0)
            return i;
    }

    return -1;  
}

int main() {
    string s = "[ABC[23]][89]";
    int index = 0;

    cout << findClosingBracket(s, index);
}