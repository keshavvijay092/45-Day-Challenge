class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit =0; 
        int buy = prices[0];
        int n = prices.size(); 

        for(int i=1;i<n;i++)
        {
           if(prices[i]<buy)
           {
            buy = prices[i];
           }
           else if(prices[i]>buy)
           {
              maxProfit +=(prices[i]-buy);
              if(i+1<n) buy = prices[i];
           }
        }
        return maxProfit;

    }
};