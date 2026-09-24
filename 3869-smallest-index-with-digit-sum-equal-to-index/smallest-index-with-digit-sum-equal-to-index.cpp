class Solution {
public:
    bool sumofdigit(int x,int i,bool flag)
    {
        int sum=0;
        while(x>9)
        {
            int y=x%10;
            sum=sum+y;
            x=x/10;
        }
        sum=sum+x;
        if(sum==i)
            return true;
        else
            return false;
    }
    int smallestIndex(vector<int>& nums) {
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
           flag= sumofdigit(nums[i],i,flag);
            if(flag==true)
            return i;

        }
        return -1;
        
    }
};