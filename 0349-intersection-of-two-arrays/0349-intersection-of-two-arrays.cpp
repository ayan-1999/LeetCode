class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> result;
        int x=0,i=0,j=0;
        int m=nums1.size();
        int n=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i <m  && j <n)
        {
            if(i>0 && nums1[i]==nums1[i-1])
            {
                i++;
                continue;
            }
             if(j>0 && nums2[j]==nums2[j-1])
            {
                j++;
                continue;
            }

            if (nums1[i] == nums2[j])
            {
                result.push_back(nums1[i]);
                i++;
                j++;
                continue;
            }
            if(nums1[i]>nums2[j])
            {
                j++;
                continue;
            }
            if(nums1[i]<nums2[j])
            {
                i++;
                continue;
            }
        }

        return result;
        
    }
};