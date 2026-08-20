class Solution {
public:
    string getHint(string secret, string guess) {
        int count1 = 0;
        int count2 = 0;
       
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i])
                count1++;
            else {
                mp1[secret[i]]++;
                mp2[guess[i]]++;
            }
        }
        for(auto it:mp1)
            {
                if(mp2.find(it.first)!=mp2.end() && it.second>0)
                {
                    
                    count2=count2+min(it.second,mp2[it.first]);
                }
            }

            string str;
            string c = to_string(count1);
            str = str + c;
            str.push_back('A');
            string d = to_string(count2);
            str = str + d;
            str.push_back('B');
            return str;
        }
    };