class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max_profit = prices[0];
        int ans = 0;
        int n = prices.size();
        for(int i=1;i<n;i++)
        {
            if(max_profit>prices[i])
            {
                max_profit = prices[i];
            }
            else if(prices[i]-max_profit>ans)
            {
                ans = prices[i]-max_profit;
            }
        }
        return ans;
    }
};