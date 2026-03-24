// Given a string s, return true if the string is palindrome, otherwise false.
// A string is called palindrome if it reads the same forward and backward.

// Example 1
// Input : s = "hannah"
// Output : true
// Explanation : The string when reversed is --> "hannah", which is same as original string , so we return true.

// Example 2
// Input : s = "aabbaA"
// Output : false
// Explanation : The string when reversed is --> "Aabbaa", which is not same as original string, So we return false.

#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int i, string &s) {
    if (i >= s.size() / 2) {
        return true;
    }
    if (s[i] != s[s.size() - 1 - i]) {
        return false;
    }
    return Palindrome(i + 1, s);
}

int main() {
    string s;
    cout << "Enter the string : ";
    cin >> s;
    if (Palindrome(0, s)) {
        cout << "The string is palindrome." << endl;
    } else {
        cout << "The string is not palindrome." << endl;
    }
    return 0;
}