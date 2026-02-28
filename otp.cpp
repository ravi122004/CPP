#include <iostream>
using namespace std;

bool isPrime(int n) {
    n = abs(n);    

    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;

    cout << "Enter end of range: ";
    cin >> end;

    int smallestPrime = 0, largestPrime = 0;
    bool foundSmall = false, foundLarge = false;

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            smallestPrime = i;
            foundSmall = true;
            break;
        }
    }

    for (int i = end; i >= start; i--) {
        if (isPrime(i)) {
            largestPrime = i;
            foundLarge = true;
            break;
        }
    }

    cout<<"OTP is :"<<smallestPrime + largestPrime << endl;
    return 0;
}
