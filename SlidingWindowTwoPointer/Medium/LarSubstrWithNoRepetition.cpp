// Given a string, S. Find the length of the longest substring without repeating characters.

// Example 1
// Input : S = "abcddabac"
// Output : 4
// Explanation : The answer is "abcd" , with a length of 4.

// Example 2
// Input : S = "aaabbbccc"
// Output : 2
// Explanation : The answers are "ab" , "bc". Both have maximum length 2.

#include <bits/stdc++.h>
using namespace std;

int longestSubstringWithoutRepeatingCharacters(string &s) {
    int n = s.length();
    if (n == 0) return 0;
    int maxLength = 0, left = 0, right = 0;
    vector<int> mpp(256, -1); // Create a map to store the last index of each character, initialized to -1
    while (right < n) {
        if (mpp[s[right]] != -1) { // If the character is already in the map
            left = max(left, mpp[s[right]] + 1); // Move the left pointer to the right of the last occurrence of the character
        }
        mpp[s[right]] = right; // Update the last index of the character
        maxLength = max(maxLength, right - left + 1); // Update the maximum length
        right++; // Move the right pointer to the next character
    }
    return maxLength;
}