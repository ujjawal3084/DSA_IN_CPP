class Solution {
public:
    long long power(long long a, long long b, long long mod) {
        long long ans = 1;

        while (b > 0) {
            if (b % 2 == 1) {
                ans = (ans * a) % mod;
            }

            a = (a * a) % mod;
            b /= 2;
        }

        return ans;
    }

    int countGoodNumbers(long long n) {
        long long mod = 1e9 + 7;

        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long x = power(5, even, mod);
        long long y = power(4, odd, mod);

        return (x * y) % mod;
    }
};