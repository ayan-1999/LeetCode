class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int newElement=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[newElement])
            {
                newElement++;
                nums[newElement] = nums[i];
            }
        }
    return newElement+1 ;
    }
};