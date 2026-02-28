#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string vowels = "aoyeui";
    string result;

    for (char ch : s) {
        if (vowels.find(ch) == string::npos) {
            result += "." + string(1, ch);
        }
    }

    cout << result;
}