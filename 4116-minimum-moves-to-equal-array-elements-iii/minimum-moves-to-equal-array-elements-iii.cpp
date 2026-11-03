class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int z=nums[nums.size()-1];
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int x=z-nums[i];
            ans=ans+x;
        }
        return ans;
    }
};