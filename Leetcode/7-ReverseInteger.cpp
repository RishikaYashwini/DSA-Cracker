// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Example 1:
// Input: x = 123
// Output: 321

// Example 2:
// Input: x = -123
// Output: -321

// Example 3:
// Input: x = 120
// Output: 21

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout <<"Enter a number: ";
    cin >> n;
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) {
            cout << "0" << endl; // Overflow case
            return 0;
        }
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) {
            cout << "0" << endl; // Underflow case
            return 0;
        }
        rev = rev * 10 + digit;
        n /= 10;
    }
    cout << rev << endl;
    return 0;
}