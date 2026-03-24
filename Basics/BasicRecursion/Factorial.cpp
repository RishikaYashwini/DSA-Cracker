// You are given an integer n. Return the value of n! or n factorial.
// Factorial of a number is the product of all positive integers less than or equal to that number.

// Example 1
// Input: n = 2
// Output: 2
// Explanation: 2! = 1 * 2 = 2.

#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
    if(n==0) return 1;
    return n*fact(n-1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}