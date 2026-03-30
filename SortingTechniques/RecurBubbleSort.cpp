// Given an array of integers nums, sort the array in non-decreasing order using the recursive Bubble Sort algorithm, and return the sorted array.
// You must implement Bubble Sort using recursion only.
// Do not use built-in sorting functions (sort, sorted, Arrays.sort, etc.).
// A sorted array in non-decreasing order is an array where each element is greater than or equal to the previous one.

// Example 1
// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]

// Example 2
// Input: nums = [5, 4, 4, 1, 1]
// Output: [1, 1, 4, 4, 5]

#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(vector<int>& nums, int n) {
    // Base case: If the array size is 1, it's already sorted
    if (n == 1) {
        return;
    }
    
    // One pass of bubble sort. After this pass, the largest element is moved to the end.
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            swap(nums[i], nums[i + 1]);
        }
    }
    
    // Recursive call for the remaining array
    recursiveBubbleSort(nums, n - 1);
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
    
    recursiveBubbleSort(nums, n);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}