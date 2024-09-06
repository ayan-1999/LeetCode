class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int profit=0;
        for(int i=0;i<prices.size();i++)
        {
          int buy=prices[i];
            while((i+1)<prices.size() && (prices[i]<=prices[i+1]))i++;
            profit+=prices[i]-buy;
        }
        return profit;
    }
        
    
};