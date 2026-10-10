class Solution {
public:
    int minRotations(string s) {

        int ans=0;
        int y=s[0]-'0';
        y=y-0;
        if(y>5)
            {
                y=10-y;
            }
            ans=ans+y;
        
        for(int i=0;i<s.size()-1;i++)
        {
            int x=abs(s[i]-s[i+1]);
            if(x>5)
            {
                x=10-x;
            }
            ans=ans+x;
        }
        return ans;
    }
};