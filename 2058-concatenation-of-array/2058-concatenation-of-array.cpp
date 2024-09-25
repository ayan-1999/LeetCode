class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
        }
        for(int i=n;i<2*n;i++){
            ans.push_back(nums[x]);
            x++;
        }
        return ans;
    }
};