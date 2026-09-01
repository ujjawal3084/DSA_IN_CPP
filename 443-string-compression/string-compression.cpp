class Solution {
public:
    int compress(vector<char>& nums) {
        string str;

        char prev = nums[0];
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == prev) {
                count++;
            }
            else {
                str += prev;

                if (count > 1)
                    str += to_string(count);

                prev = nums[i];
                count = 1;
            }
        }

        str += prev;

        if (count > 1)
            str += to_string(count);

        for (int i = 0; i < str.size(); i++) {
            nums[i] = str[i];
        }

        return str.size();
    }
};