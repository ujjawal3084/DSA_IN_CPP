class Solution {
public:
    int helper(int amount, vector<int>& coins, vector<int>& dp)
    {
        if (amount < 0)
            return INT_MAX;

        if (amount == 0)
            return 0;

        if (dp[amount] != -1)
            return dp[amount];

        int ans = INT_MAX;

        for (int i = 0; i < coins.size(); i++)
        {
            int res = helper(amount - coins[i], coins, dp);

            if (res != INT_MAX)
                ans = min(ans, 1 + res);
        }

        return dp[amount] = ans;
    }

    int coinChange(vector<int>& coins, int amount)
    {
        vector<int> dp(amount + 1, -1);

        int ans = helper(amount, coins, dp);

        if (ans == INT_MAX)
            return -1;

        return ans;
    }
};