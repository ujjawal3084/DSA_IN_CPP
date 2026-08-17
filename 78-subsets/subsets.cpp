class Solution {
public:
    void sub(vector<int>& nums, vector<vector<int>>& ans, int idx,
             vector<int>an) {

        if (idx == nums.size()) {
            ans.push_back(an);
        
        return;
        }
        int x = nums[idx];

        sub(nums, ans, idx + 1,an);
        an.push_back(x);
        sub(nums, ans, idx + 1,an);
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int>an;
        vector<vector<int>> ans;
        sub(nums, ans, 0, an); return ans;
    }
};