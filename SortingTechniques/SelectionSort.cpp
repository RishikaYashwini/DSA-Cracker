// Given an array of integers nums, sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.
// A sorted array in non-decreasing order is an array where each element is greater than or equal to all previous elements in the array.

// Example 1
// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]

// Example 2
// Input: nums = [5, 4, 4, 1, 1]
// Output: [1, 1, 4, 4, 5]

#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int a[], int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(a[i], a[min]);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SelectionSort(a, n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}