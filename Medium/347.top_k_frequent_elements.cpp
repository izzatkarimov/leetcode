class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count; // hash map to store the frequency of each elements in nums
        vector<vector<int>> freq(nums.size() + 1); // index represents the frequency of elements

        for (int n : nums) {
            count[n] = 1 + count[n];
        } // count the frequency of each element & increment into the map
        for (const auto& entry : count) {
            freq[entry.second].push_back(entry.first);
        } // group elements by their frequency into the corresponding bucket (frequency index)

        // collect the top frequent elements
        vector<int> res;
        for (int i = freq.size() - 1; i > 0; --i) {
            for (int n : freq[i]) {
                res.push_back(n);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};

// bucket sort algorithm
// Time: O(n)
// Space: O(n)