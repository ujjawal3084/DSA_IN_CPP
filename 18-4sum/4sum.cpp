class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++)
        { 
            
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<nums.size();j++)
            {
                int k=j+1;
                int l=nums.size()-1;
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;
                while(k<l)
                {
                    
                    vector<int>v;
                    long long sum= (long long)nums[k]+nums[l]+nums[i]+nums[j];
                    if(sum<target)
                        k++;
                    else if(sum==target)
                    {
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[k]);
                        v.push_back(nums[l]);
                        ans.push_back(v);
                        k++;
                        l--;
                    while(k<l && nums[k]==nums[k-1])
                        k++;
                    while(k<l && nums[l]==nums[l+1])
                        l--;
                    }
                    else
                    {
                        l--;
                    }
                }
                
                
            }
        }
        return ans;
    }
};