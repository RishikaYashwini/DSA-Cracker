// Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1
// Input: nums = [2, 3, 5, -2, 7, -4]
// Output: 15

// Example 2
// Input: nums = [-2, -3, -7, -2, -10, -4]
// Output: -2

#include <bits/stdc++.h>
using namespace std;

int MaxSubArray(vector<int> &nums) {
    int maxSum = nums[0]; // Initialize maxSum with the first element of the array
    int sum = nums[0]; // Initialize sum to the first element of the array
    for (int i = 1; i < nums.size(); i++) {
        sum = max(nums[i], sum + nums[i]);
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main() {
    vector<int> nums = {2, 3, 5, -2, 7, -4}; // Example input array
    cout << "Maximum Subarray Sum: " << MaxSubArray(nums) << endl; // Output the maximum subarray sum
    return 0;
}

