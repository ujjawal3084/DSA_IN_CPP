class Solution {
public:
    int furthestDistanceFromOrigin(string s) {
        int countL=0;
        int countR=0;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
                countL++;
            else if(s[i]=='R')
                countR++;
        }
         char x;
        if(countL>countR)
             x='L';
        else if(countL<countR)
             x='R';
        if(countL==countR)
             x='L';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='_')
            {
                s[i]=x;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            sum--;
            else if(s[i]=='R')
            sum++;
        }
        sum=abs(sum);
        return sum;
    }
};