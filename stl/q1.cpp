#include <iostream>
#include <map>
using namespace std;

int main() {
    string str = " abcd  abcd  aabb";

    map<char, int> freq;

    for (char ch : str) {
        if (ch != ' ') {   
            freq[ch]++;
        }
    }
    for (auto it : freq) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}