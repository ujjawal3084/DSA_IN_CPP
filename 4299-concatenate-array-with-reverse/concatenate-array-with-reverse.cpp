class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>rev;
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--)
        {
            rev.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        for(int i=0;i<rev.size();i++)
        {
            ans.push_back(rev[i]);
        }
        return ans;
        
    }
};