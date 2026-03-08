// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

// Example 
// Input: n = 153
// Output: true

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout <<"Enter a number: ";
    cin >> n;
    int org = n; // Storing the original number in a variable
    int sum = 0;
    while (n > 0) {
        int digit = n % 10; // Extracting the last digit of n
        sum += pow(digit, 3); // Adding the cube of the extracted digit to the sum
        n /= 10; // Removing the last digit from n
    }
    if (org == sum) { // Checking if the original number is equal to the sum
        cout << "true" << endl; // If they are equal, it is an armstrong number
    } else {
        cout << "false" << endl; // If they are not equal, it is not an armstrong number
    }
    return 0;
}