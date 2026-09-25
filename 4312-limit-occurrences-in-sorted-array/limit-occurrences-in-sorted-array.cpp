class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        ans.push_back(nums[0]);
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(ans.back()==nums[i] && count<k)

            {
                ans.push_back(nums[i]);
                count++;
            }
            else if(ans.back()==nums[i] && count>=k)
            {
                
                count++;
            }
            else if (ans.back()!=nums[i])
            {
                count=1;
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};