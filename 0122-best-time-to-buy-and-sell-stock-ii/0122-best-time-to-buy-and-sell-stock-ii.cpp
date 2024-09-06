class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int buy=prices[0];
      int sell=prices[0];
        int totalprofit=0;
        int lastprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            int curr=prices[i];
            if(curr>sell)
            {
                sell=curr;
                lastprofit=max(lastprofit,sell-buy);
                continue;
            }
            if(curr<sell)
            {
                totalprofit+=lastprofit;
                lastprofit=0;
                buy=curr;
                sell=curr;
            }
        }
        return totalprofit+lastprofit;
    }
};