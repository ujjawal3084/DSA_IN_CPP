class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                    long long z=gcd(nums[i], nums[j]);
                    z=z*z;
                    long long strength=(1LL * nums[i] * nums[j]) / z;
                    ans=max(ans,strength);
                }
            }
        }
        return ans;
    }
};