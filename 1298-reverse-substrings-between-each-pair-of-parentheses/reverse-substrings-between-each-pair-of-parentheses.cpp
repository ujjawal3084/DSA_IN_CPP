class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            string str;
            if(s[i]==')' && st.size()!=0)
            {
                while(st.top() !='(')
                {
                char x=st.top();
                st.pop();
                str=str + x;
                }
                st.pop();
                //reverse(str.begin(),str.end());
                int i=0;
                while(i<str.size())
                {
                    st.push(str[i]);
                    //str.pop_back();
                    i++;
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        string ans;
        while(st.size()!=0)
        {
            char x=st.top();
            st.pop();
            ans=ans+x;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};