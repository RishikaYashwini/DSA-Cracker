// Given an array of integers called nums, sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array.
// A sorted array in non-decreasing order is an array where each element is greater than or equal to all preceding elements in the array.

// Example 1
// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]

// Example 2
// Input: nums = [5, 4, 4, 1, 1]
// Output: [1, 1, 4, 4, 5]

#include <bits/stdc++.h>
using namespace std;

vector<int> InsertionSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i <= n - 1; i++) {
        for(int j = i; j > 0; j--) {
            if(nums[j-1] > nums[j]) {
                swap(nums[j-1], nums[j]);
            }
        } 
    }
    return nums;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    nums = InsertionSort(nums);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}