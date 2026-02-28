#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int maxPeopleSeen(vector<int>& arr) {
    int n = arr.size();
    vector<int> left(n, 0), right(n, 0);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] < arr[i]) {
            left[i] += left[st.top()] + 1;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty()) st.pop();

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] < arr[i]) {
            right[i] += right[st.top()] + 1;
            st.pop();
        }
        st.push(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, left[i] + right[i] + 1);
    }

    return ans;
}

int main() {
    vector<int> arr = {6, 2, 5, 4, 5, 1, 6};
    cout << maxPeopleSeen(arr);
}