class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            if(n%j==0)
            {
                long long z=nums[i]*nums[i];
                ans=ans+z;
            }
        }
        return ans;
    }
};