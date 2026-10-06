class Solution {
public:
    int minAddToMakeValid(string s) {
        int count1=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                count1++;
            }
            if(s[i]==')')
            {
                if(count1>0)
                count1--;
                else
                ans++;
            }
        }
        ans=abs(count1+ans);
        return ans;
    }
};