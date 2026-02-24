// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// ABCDE
// ABCD
// ABC
// AB
// A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "n = ";
    cin >> n;
    char ch;
    for (int i = n; i >= 1; i--) {
        for (ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}