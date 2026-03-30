// Given an array of integers nums, sort the array in non-decreasing order using the recursive Insertion Sort algorithm, and return the sorted array.
// You must implement Insertion Sort using recursion only.
// Do not use loops (like for or while) or built-in sorting functions (sort, Arrays.sort, etc.).
// A sorted array in non-decreasing order is an array where each element is greater than or equal to all elements that come before it.

// Example 1
// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]

// Example 2
// Input: nums = [5, 4, 4, 1, 1]
// Output: [1, 1, 4, 4, 5]

#include <bits/stdc++.h>
using namespace std;

void recursiveInsertionSort(vector<int>& nums, int n) {
    // Base case: If the array size is 1 or less, it's already sorted
    if (n <= 1) {
        return;
    }
    for(int j = n-1; j > 0; j--) {
        if(nums[j] < nums[j-1]) {
            swap(nums[j], nums[j-1]);
        } else {
            break;
        }
    }
    recursiveInsertionSort(nums, n - 1);
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
    
    recursiveInsertionSort(nums, n);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}