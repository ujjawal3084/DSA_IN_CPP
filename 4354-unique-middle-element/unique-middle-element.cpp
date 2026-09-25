class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int x=nums[n/2];
        for(int i=0;i<nums.size();i++)
        {
            if(i==n/2)
            continue;
            else if(x==nums[i])
            return false;
        }
        return true;
    }
};