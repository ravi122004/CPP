#include <iostream>
using namespace std;

bool areRotations(string &s1, string &s2) {
    int n = s1.size();
  	
    for (int i = 0; i < n; ++i) {
      
        if (s1 == s2)
            return true;
      
        char last = s1.back();
        s1.pop_back(); 
        s1 = last + s1;
    }
    return false;
}

int main() {
    string s1;
    string s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;

    cout << (areRotations(s1, s2) ? "true" : "false");
    return 0;
}