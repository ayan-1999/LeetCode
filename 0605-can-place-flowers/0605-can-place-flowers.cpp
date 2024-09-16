class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)return true;
        
        for(int i=0;i<flowerbed.size();i++){
           if(flowerbed[i]==0){
            bool left_khali=(i==0) || (flowerbed[i-1]==0);
            bool right_khali=(i==flowerbed.size()-1) || (flowerbed[i+1]==0);
            if(left_khali && right_khali){
                flowerbed[i]=1;
                n--;
                if (n==0) return true;
            }
           }
        }
    return false;    
    }
};