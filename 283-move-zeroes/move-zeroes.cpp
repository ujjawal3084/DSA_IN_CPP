class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       // int n=nums.size();
        int count=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                ans.push_back(nums[i]);
            else
            count++;
        }
        for(int i=0;i<ans.size();i++)
        {
            nums[i]=ans[i];
        }
        for(int i=ans.size();i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};