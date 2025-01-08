class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1); // Initialize the result array with 1s

        // Compute the prefix product for each index
        for (int i = 1; i < n; i++) {
            res[i] = res[i - 1] * nums[i - 1]; // res[i] holds the product of all elements to the left of nums[i]
        }

        int postfix = 1; // Initialize postfix product as 1
        // Compute the postfix product and multiply with the prefix product
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= postfix; // Multiply the current result with the postfix product
            postfix *= nums[i]; // Update the postfix product to include nums[i]
        }

        return res; // Return the final result array
    }
};