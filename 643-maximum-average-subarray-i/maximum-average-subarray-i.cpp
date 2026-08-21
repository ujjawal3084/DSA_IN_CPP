class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum = 0;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double ans = (double)sum / k;

        for (int i = k; i < nums.size(); i++) {
            sum -= nums[i - k];
            sum += nums[i];

            double current = (double)sum / k;
            ans = max(ans, current);
        }

        return ans;
    }
};