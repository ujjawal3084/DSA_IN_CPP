class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum=0;
        int profit=0;
        int  minimum=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minimum)
            {
                minimum=prices[i];
            }
            else
            {
                profit=prices[i]-minimum;
                maximum=max(profit,maximum);
            }
        }
        return maximum;
    }
};