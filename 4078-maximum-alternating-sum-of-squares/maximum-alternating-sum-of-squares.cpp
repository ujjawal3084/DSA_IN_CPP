class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            ans.push_back(nums[right]);
            ans.push_back(nums[left]);
            left++;
            right--;
        }
        if (left == right) {
            ans.push_back(nums[left]);
        }
        long long an=0;
        for(int i=0;i<ans.size();i++)
        {
            long long z=0;
            z=1LL*ans[i]*ans[i];
            if(i%2==0)
            {
                
                an=an+z;
            }
            else
                an=an-z;

        }
        return an;
    }
};