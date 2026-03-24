// Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.

// Example 1
// Input : N = 4
// Output : 10
// Explanation : first four natural numbers are 1, 2, 3, 4.
// Sum is 1 + 2 + 3 + 4 => 10.

#include <bits/stdc++.h>
using namespace std;

int sumN(int n) {
    if (n == 1) return 1;
    return n + sumN(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << sumN(n) << endl;
    return 0;
}