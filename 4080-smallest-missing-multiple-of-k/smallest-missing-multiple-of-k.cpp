class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st(nums.begin(),nums.end());
        int i=1;
        int ans=0;
        while(true)
        {
            ans=i*k;
            if(st.find(ans)!=st.end())
            {
                i++;
            }
            else
            break;

            
        }
        return ans;
    }
};