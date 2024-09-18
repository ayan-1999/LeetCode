class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxWater=0;
        int left=0;
        int right=n-1;
        while(left<right){
            if(height[left]>height[right]){
                maxWater=max(maxWater,height[right]*(right-left));
                right--;
            }
            else{
                maxWater=max(maxWater,height[left]*(right-left));
                left++; 
            }

        }
    return maxWater;
    }
};