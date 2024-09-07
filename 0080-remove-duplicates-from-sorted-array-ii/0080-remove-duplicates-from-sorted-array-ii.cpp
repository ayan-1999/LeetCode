class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int count=1;
     int   curcount=1;
        for(int i=1; i<nums.size();i++)
        {
           if(nums[i]==nums[i-1] && curcount==1||0)
           {
               nums[count]=nums[i];
               curcount++;
               count++;
           }
            if(nums[i]!=nums[i-1])
            {
                curcount=0;
                nums[count]=nums[i];
                curcount++;
               count++;
            }
            
        }
        return count;

    }
};