class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int n=nums.size();
        int count=0;
        int newElement=nums[0];
        for(int i=0;i<n;i++)
        {
            if(nums[i]==newElement){
                count++;
                if(count>n/2)return nums[i];
            }
            else {
                newElement=nums[i];
                count=1;
           
            }
        }
        return -1;
    }
};