// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// E 
// D E 
// C D E 
// B C D E 
// A B C D E

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (char)('E' - i + j) << " ";
        }
        cout << endl;
    }
    return 0;
}