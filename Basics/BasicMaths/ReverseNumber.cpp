// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

// Example 
// Input: n = 2536
// Output: 6352

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout <<"Enter a number: ";
    cin >> n;
    int rev = 0;
    while (n > 0) {
        int digit = n % 10; // Extracting the last digit of n
        rev = rev * 10 + digit; // Appending the extracted digit to the reversed number
        n /= 10; // Removing the last digit from n
    }
    cout << rev << endl;
    return 0;
}