// Counting Frequencies of Array Elements
// Given an array nums of size n which may contain duplicate elements.
// Return a list of pairs where each pair contains a unique element from the array and its frequency in the array.
// You may return the result in any order, but each element must appear exactly once in the output.

// Example 1
// Input: nums = [1, 2, 2, 1, 3]
// Output: [[1, 2], [2, 2], [3, 1]]


// Example 2
// Input: nums = [5, 5, 5, 5]
// Output: [[5, 4]]

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> countFrequencies(vector<int>& nums) {
    unordered_map<int, int> mpp;
    
    // Count the frequency of each element
    for (int it : nums) {
        mpp[it]++;
    }
    
    vector<vector<int>> result;
    
    // Create the result vector of pairs
    for (auto res : mpp) {
        result.push_back({res.first, res.second});
    }
    
    return result;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 3};
    vector<vector<int>> frequencies = countFrequencies(nums);
    
    for (auto pair : frequencies) {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    cout << endl;
    
    return 0;
}