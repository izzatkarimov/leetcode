class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // sorting in ascending order
        for(int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]){
                return true; // comparing one element in the array to the previous one - if they are equal, then it means they are duplicates and returns true
            }
        }
        return false;
    }
};z