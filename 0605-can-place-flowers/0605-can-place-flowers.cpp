class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)return true;
        int count=1;
        for(int i=0;i<flowerbed.size();i++){
           if(flowerbed[i]==0){
                count++;
           }
           else{
            count=0;
           }
           if(count==3){
            n--;
            count=1;
           }
           else if(count ==2 && i==flowerbed.size()-1){
            n--;
           }
           if (n==0)return true;
        }





    return n==0;    
    }
};