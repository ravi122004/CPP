#include <iostream>
using namespace std;

int main() {
    int arr[8] = {3, 5, 6, 2, 8, 3, 2, 2};
    int count = 0;

    for (int i = 0; i < 8; i++) {
        bool alreadyCounted = false;

        // check if arr[i] appeared before
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyCounted = true;
                break;
            }
        }
        if (alreadyCounted) continue; 
        for (int j = i + 1; j < 8; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    cout << count;
    return 0;
}
