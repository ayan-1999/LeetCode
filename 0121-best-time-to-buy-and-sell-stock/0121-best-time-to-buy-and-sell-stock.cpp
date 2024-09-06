class Solution {
   
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
      int sell=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            int curr=prices[i];
            if(curr>sell)
            {
                sell=curr;
                profit=max(profit,sell-buy);
                continue;
            }
            if(curr<buy)
            {
                buy=curr;
                sell=curr;
            }
        }
        return profit;
    }
};