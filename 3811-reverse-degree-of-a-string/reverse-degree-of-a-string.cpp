class Solution {
public:
    int reverseDegree(string s) {
        int result=0;
        for(int i=0;i<s.size();i++)
        {
            int x=int(s[i]);
            x=x-97;
            int y=26-x;
            y=y*(i+1);
            result=result+y;

        }
        return result;
    }
};