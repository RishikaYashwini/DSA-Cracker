// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.
// A palindrome number is a number which reads the same both left to right and right to left.

// Example 1
// Input: n = 121
// Output: true


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout <<"Enter a number: ";
    cin >> n;
    int org = n; // Storing the original number in a variable
    int rev = 0;
    while (n > 0) {
        int digit = n % 10; // Extracting the last digit of n
        rev = rev * 10 + digit; // Appending the extracted digit to the reversed number
        n /= 10; // Removing the last digit from n
    }
    if (org == rev) { // Checking if the original number is equal to the reversed number
        cout << "true" << endl; // If they are equal, it is a palindrome number
    } else {
        cout << "false" << endl; // If they are not equal, it is not a palindrome number
    }
    return 0;
}