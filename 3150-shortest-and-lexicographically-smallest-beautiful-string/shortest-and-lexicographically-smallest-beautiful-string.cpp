class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> v;
        string str;
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            
            str.push_back(s[i]);

            if (s[i] == '1')
                count++;

            // Too many 1s -> remove from left
            while (count > k) {
                if (str[0] == '1')
                    count--;

                str.erase(str.begin());
            }

            // We have exactly k ones
            if (count == k) {

                // Push current substring
                v.push_back(str);

                // Keep removing leading zeroes
                while (!str.empty() && str[0] == '0') {
                    str.erase(str.begin());

                    // Every removal gives another valid substring
                    if (count == k)
                        v.push_back(str);
                }
            }
        }

        if (v.empty())
            return "";

        string ans = v[0];

        for (auto &x : v) {
            if (x.size() < ans.size() ||
                (x.size() == ans.size() && x < ans)) {
                ans = x;
            }
        }

        return ans;
    }
};