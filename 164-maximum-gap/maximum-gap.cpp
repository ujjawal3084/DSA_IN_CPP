class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)
        return 0;
        sort(nums.begin(),nums.end());
        int ma=0;
        for(int i=1;i<nums.size();i++)
        {
            
            int m =nums[i]-nums[i-1];
            ma =max(m,ma);

        }
        return ma;
    }
};