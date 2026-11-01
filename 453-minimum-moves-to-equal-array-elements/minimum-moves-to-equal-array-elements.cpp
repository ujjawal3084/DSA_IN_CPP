class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            ans=ans+(nums[i]-min);
        }
        return ans;
    }
};