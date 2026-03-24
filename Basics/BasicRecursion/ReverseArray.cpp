// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.

// Example 1
// Input: n=5, arr = [1,2,3,4,5]
// Output: [5,4,3,2,1]
// Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n) {
    if (n <= 0) return;
    swap(arr[0], arr[n-1]);
    reverse(arr + 1, n - 2);
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}