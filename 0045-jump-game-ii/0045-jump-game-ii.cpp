class Solution {
public:
    int jump(vector<int>& nums) {
        int left = 0, right = 0;  // Initialize both `left` and `right` to 0
        int res = 0;  // Count of jumps
        
        // While `right` is less than the last index
        while (right < nums.size() - 1) {
            int furthest = 0;  // Track the furthest point we can reach
            
            // Expand the current window
            for (int i = left; i <= right; i++) {
                furthest = max(furthest, i + nums[i]);
            }
            
            // Move the window to the new range
            left = right + 1;
            right = furthest;
            
            // Increment the jump count
            res++;
        }
        
        return res;
    }
};
