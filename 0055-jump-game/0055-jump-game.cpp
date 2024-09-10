class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size() - 1;  
        // Initialize goal to the last index
        
        // Special case: if there is only one element, you're      already at the goal
        if (nums.size() == 1)
            return true;
        
 // Iterate from the second last element to the first
        for (int i = nums.size() - 2; i >= 0; i--) {
// If the current position can jump to or beyond the goal
            if (i + nums[i] >= goal)
                goal = i;  // Update the goal to the current index
        }
        
        // If the goal has reached the first index, return true
        return goal == 0;
    }
};
