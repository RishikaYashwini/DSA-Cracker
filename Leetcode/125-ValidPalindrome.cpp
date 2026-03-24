// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.

// Example 1:
// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.

// Example 2:
// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.

// Example 3:
// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.
#include<bits/stdc++.h>
using namespace std;

bool Palindrome2(string s) {
    string temp = "";
    for (char c : s) {
        if (isalnum(c)) {
            temp += tolower(c);
        }
    }
    int i = 0, j = temp.size() - 1;
    while (i < j) {
        if (temp[i] != temp[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter the string : ";
    cin >> s;
    if (Palindrome2(s)) {
        cout << "The string is palindrome." << endl;
    } else {
        cout << "The string is not palindrome." << endl;
    }
    return 0;
}