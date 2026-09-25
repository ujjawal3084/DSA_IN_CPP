class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
        }
        int i=0;
        int j=nums.size()-1;
        int con=0;
        while(i<count)
        {
            if(nums[j]==0)
            con++;

            j--;
            i++;

        }
        int ans=count-con;
        return ans;
    }
};