// Brute Force

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        for (int i = 0; i < height.size(); i++) {
            for (int j = 0; j < height.size(); j++) {
                res = max(res, min(height[i], height[j]) * (i - j));
            }
        }
        return res;
    }
};

// Time: O(n^2)
// Space: O(1)

// Two Pointers

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;                       // Initialize left pointer
        int r = height.size() - 1;      // Initialize right pointer
        int result = 0;                  // To store the maximum area

        while (l < r) {
            // Calculate area
            int area = min(height[l], height[r]) * (r - l);

            // Update maximum area
            result = max(result, area);

            // Move the pointer pointing to the shorter line
            if (height[l] <= height[r]) {
                l++;
            } else {
                r--;
            }
        }
        // Return the maximum area
        return result;
    }
};

// Time: O(n)
// Space: o(1)