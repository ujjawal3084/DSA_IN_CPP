class Solution {
public:
    string countAndSay(int n) {
        
        string str = "1";

        for (int i = 2; i <= n; i++) {
            
            string ans = "";
            int j = 0;

            while (j < str.size()) {
                
                int count = 0;
                char ch = str[j];

                while (j < str.size() && str[j] == ch) {
                    count++;
                    j++;
                }

                ans += to_string(count);
                ans += ch;
            }

            str = ans;
        }

        return str;
    }
};