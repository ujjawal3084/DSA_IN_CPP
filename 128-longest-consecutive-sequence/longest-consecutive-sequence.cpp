class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        int count=1;
        int maxcount=1;
        
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-1;i++)
        {
            if((nums[i]+1)==nums[i+1])
            {
                count++;
            }
            else if(nums[i]==nums[i+1])
                continue;
            else
            {
                maxcount=max(maxcount,count);
                count=1;
            }
        }
        maxcount=max(maxcount,count);
        return maxcount;
    }
};