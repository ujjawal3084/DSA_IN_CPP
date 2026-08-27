class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        unordered_map<int,int>mp;
        //sort(nums.begin(),nums.end());
        vector<int>v;
       for(int i=0;i<nums.size();i++)
       {
            if(mp.find(nums[i])!=mp.end())
            {
                v.push_back(i);
                v.push_back(mp[nums[i]]);
                return v;
            }
            else
            {
                int x=target-nums[i];
                mp[x]=i;
            }
       }
        return v;
    }
};