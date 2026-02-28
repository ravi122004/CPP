#include <iostream>
#include <vector>
#include <stack>
#include <set>
using namespace std;

int countUniqueDiff(vector<int>& arr) {
    int n = arr.size();
    stack<int> st;
    set<int> diffSet;

    for (int i = 0; i < n; i++) {
        
        while (!st.empty() && st.top() < arr[i]) {
            diffSet.insert(arr[i] - st.top());
            st.pop();
        }

        if (!st.empty()) {
            diffSet.insert(st.top() - arr[i]);
        }

        st.push(arr[i]);
    }

    return diffSet.size();
}

int main() {
    vector<int> arr = {5, 2, 3, 8};
    cout << countUniqueDiff(arr);
}