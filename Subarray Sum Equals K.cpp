#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        int count = 0;
        int prefixSum = 0;

        // Initialize the hashmap with (0,1) to handle cases where prefixSum == k
        prefixSumCount[0] = 1;

        for (int num : nums) {
            prefixSum += num;  // Update current prefix sum
            
            // Check if there's a subarray (prefixSum - k) present in the map
            if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[prefixSum - k];
            }

            // Store the frequency of the current prefixSum
            prefixSumCount[prefixSum]++;
        }

        return count;
    }
};
