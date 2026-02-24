// Given an integer N, print the following pattern :

//    A
//   ABA
//  ABCBA
// ABCDCBA

// Here, N=4.

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = n-1; j >= i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << (char)('A' + j - 1);
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << (char)('A' + j - 1);
        }
        cout << endl;
    }
    return 0;
}