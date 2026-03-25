// Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.

// Example 1
// Input: nums = [1, 2, 2, 3, 3, 3]
// Output: 3

// Example 2
// Input: nums = [4, 4, 5, 5, 6]
// Output: 4

#include<bits/stdc++.h>
using namespace std;

int maxFreq(vector<int>& nums) 
{
    unordered_map<int, int> mpp;
    
    // Count the frequency of each element
    for (int it : nums) {
        mpp[it]++;
    }
    
    int max = 0;
    int ans;
    
    // Find the most frequent element
    for (auto res : mpp) {
        if (res.second > max) {
            max = res.second;
            ans = res.first;
        } else if (res.second == max) {
            ans = min(ans, res.first);
        }
    }
    
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    cout << maxFreq(nums) << endl; // Output: 3
    
    vector<int> nums2 = {4, 4, 5, 5, 6};
    cout << maxFreq(nums2) << endl; // Output: 4
    
    return 0;
}