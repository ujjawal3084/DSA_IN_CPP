class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
        return s;
        vector<string> rows(numRows);
        bool flag = true;
        int index = 0;
        for (int i = 0; i < s.size(); i++) {
            if (index == numRows) {
                flag = false;
                index = index - 2;
            }
            if (index == 0)
                flag = true;

            if (flag == true) {
                rows[index] =rows[index]+s[i];
                index++;
            } else if (flag == false) {
                rows[index] =rows[index]+s[i];
                index--;
            }
        }
        string str="";
        for(int i=0;i<rows.size();i++)
        {
            str=str+rows[i];
        }
        return str;
    }
};