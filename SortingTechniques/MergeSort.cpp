// Given an array of integers, nums,sort the array in non-decreasing order using the merge sort algorithm. Return the sorted array.
// A sorted array in non-decreasing order is one in which each element is either greater than or equal to all the elements to its left in the array.

// Example 1
// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]

// Example 2
// Input: nums = [5, 4, 4, 1, 1]
// Output: [1, 1, 4, 4, 5]

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int a=low, b=mid+1;
    while(a<=mid && b<=high) {
        if(arr[a] <= arr[b]) {
            temp.push_back(arr[a]);
            a++;
        }
        else {
            temp.push_back(arr[b]);
            b++;
        }
    }
    while(a<=mid) {
        temp.push_back(arr[a]);
        a++;
    }
    while(b<=high) {
        temp.push_back(arr[b]);
        b++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void Partition(vector<int>& arr, int low, int high) {
    if(low >= high) return;
    int mid = (low + high)/2;
    Partition(arr, low, mid);
    Partition(arr, mid+1, high);
    merge(arr, low, mid, high);
    
}

vector<int> MergeSort(vector<int>& nums) {
    Partition(nums, 0, nums.size()-1);
    return nums;
}

int main() {
    vector<int> nums = {7, 4, 1, 5, 3};
    vector<int> sorted = MergeSort(nums);
    for(int i: sorted) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}