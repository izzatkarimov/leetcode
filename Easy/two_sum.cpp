class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> indices; // declare a hash map

        for (int i = 0; i < nums.size(); i++) {
            indices[nums[i]] = i;
        } // loop through the array & add the numbers to the map

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i]; // diff + nums[i] = target
            if (indices.count(diff) && indices[diff] != i) {
                return {i, indices[diff]}; // return indices of the 2 numbres
            }
        }
        return {};
        
    }
};

// time: O(n)
// space: O(n)