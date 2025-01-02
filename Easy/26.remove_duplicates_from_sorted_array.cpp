class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // given integer array nums in non-decreasing order - ascending order
        // in-place algorithm
        // remove duplicates - unique elements appear once
        // order -> same
        // num of uniq elements = k
        // return k = int
        int left = 1;
        for (int right = 1; right < nums.size(); right++) {
            if (nums[right] != nums[right - 1]) {
                nums[left++] = nums[right];
            }
        }
        return left;
    }
};

// time: O(n)
// space: O(1)