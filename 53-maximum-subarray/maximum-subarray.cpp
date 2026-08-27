class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int mx=INT_MIN;
       //int right=0;
       int sum=0;
       for(int right=0;right<nums.size();right++)
       {
            sum=sum+nums[right];
            mx=max(sum,mx);
            if(sum<0)
            {
                
                
                sum=0;
            }
            
            
       }
       
       return mx; 
    }
};