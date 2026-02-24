// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            int top = i - 1;
            int left = j - 1;
            int right = 2 * n - 1 - j;
            int bottom = 2 * n - 1 - i;
            cout << n - (min(min(top, bottom), min(left, right))) << " ";
        }
        cout << endl;
    }
    return 0;
}