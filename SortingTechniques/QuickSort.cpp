// Given an array of integers called nums, sort the array in non-decreasing order using the quick sort algorithm and return the sorted array.
// A sorted array in non-decreasing order is an array where each element is greater than or equal to all preceding elements in the array.

// Example 1
// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]

// Example 2
// Input: nums = [5, 4, 4, 1, 1]
// Output: [1, 1, 4, 4, 5]

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums, int low, int high) {
    int pivot = nums[low];
    int i = low, j = high;
    while (i < j) {
        while (i <= high && nums[i] <= pivot) {
            i++;
        }
        while (j > low && nums[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[low], nums[j]);
    return j;
}

void quickSort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int pi = partition(nums, low, high);
        quickSort(nums, low, pi - 1);
        quickSort(nums, pi + 1, high);
    }
}

vector<int> sortArray(vector<int> &nums)
{
    quickSort(nums, 0, nums.size() - 1);
    return nums;
}

int main()
{
    vector<int> nums = {7, 4, 1, 5, 3};
    vector<int> sortedNums = sortArray(nums);
    for (int num : sortedNums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}