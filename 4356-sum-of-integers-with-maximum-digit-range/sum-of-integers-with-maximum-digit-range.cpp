class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int>v;
        vector<int>val;
        for(int i=0;i<nums.size();i++)
        {
            int digitrange=INT_MIN;
            int mx=INT_MIN;
            int mn=INT_MAX;
            int z=nums[i];
            while(z>0)
            {
                int x=z%10;
                mx=max(x,mx);
                mn=min(x,mn);
                z=z/10;
            }
            int a=mx-mn;
            //digitrange=max(a,digitrange);

            if(v.size()==0){
                v.push_back(a);
                val.push_back(nums[i]);
            }
            else if(v[0]>a)
                continue;
            else if(v[0]==a)
                val.push_back(nums[i]);
            else if(v[0]<a)
            {
                v.clear();
                v.push_back(a);
                val.clear();
                val.push_back(nums[i]);
            }
        }
        int ans=0;
        for(int i=0;i<val.size();i++)
        {
            ans=ans+val[i];
        }
        return ans;
    }
};