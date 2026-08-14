class Solution {
public:
    string makeFancyString(string s) {
        int count=1;
        string str;
        str.push_back(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]==s[i])
            count++;
            else
            count=1;
            if(count<3)
            {
                str.push_back(s[i]);
            }
           
            
        }
        
         return str;
    }
};