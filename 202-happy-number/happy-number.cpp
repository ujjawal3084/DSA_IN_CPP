class Solution {
public:
    int sumofsquare(int n) {
        int ans = 0;

        while (n > 0) {
            int x = n % 10;
            ans += x * x;
            n /= 10;
        }

        return ans;
    }

    bool isHappy(int n) {
        unordered_set<int> st;

        while (n != 1) {
            if (st.find(n) != st.end())
                return false;

            st.insert(n);
            n = sumofsquare(n);
        }

        return true;
    }
};