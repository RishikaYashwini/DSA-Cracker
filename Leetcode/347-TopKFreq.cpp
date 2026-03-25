// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

// Example 1:
// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]

// Example 2:
// Input: nums = [1], k = 1
// Output: [1]

// Example 3:
// Input: nums = [1,2,1,2,1,2,3,1,3,2], k = 2
// Output: [1,2]

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map; // A hash map to store the frequency of each element in the input array
        for (int it : nums) { // Iterating through the input array
            map[it]++; // Incrementing the frequency of the current element in the hash map
        }

        priority_queue<pair<int, int>> pq; // A priority queue to store the elements and their frequencies (max heap based on frequency)
        for (auto it : map) { // Iterating through the hash map
            pq.push({it.second, it.first}); // Adding the current element and its frequency to the priority queue (the frequency is used as the key for sorting in the max heap)
        }

        vector<int> result; // A vector to store the k most frequent elements
        for (int i = 0; i < k; i++) { // Iterating k times to get the k most frequent elements
            result.push_back(pq.top().second); // Adding the element with the highest frequency (the top of the priority queue) to the result vector
            pq.pop(); // Removing the element with the highest frequency from the priority queue
        }

        return result; // Returning the result vector containing the k most frequent elements
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    int k1 = 2;
    vector<int> result1 = sol.topKFrequent(nums1, k1);
    cout << "Top " << k1 << " frequent elements: ";
    for (int it : result1) {
        cout << it << " ";
    }
    cout << endl;

    vector<int> nums2 = {1};
    int k2 = 1;
    vector<int> result2 = sol.topKFrequent(nums2, k2);
    cout << "Top " << k2 << " frequent elements: ";
    for (int it : result2) {
        cout << it << " ";
    }
    cout << endl;

    vector<int> nums3 = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2};
    int k3 = 2;
    vector<int> result3 = sol.topKFrequent(nums3, k3);
    cout << "Top " << k3 << " frequent elements: ";
    for (int it : result3) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}