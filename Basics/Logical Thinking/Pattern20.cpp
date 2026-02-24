// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}