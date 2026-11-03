class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int y=0;
        int n=nums.size();
        if(n%2==0)
        y=nums[(n+1)/2];
        else
        y=nums[n/2];
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int x=abs(y-nums[i]);
            ans=ans+x;
        }
        return ans;
    }
};