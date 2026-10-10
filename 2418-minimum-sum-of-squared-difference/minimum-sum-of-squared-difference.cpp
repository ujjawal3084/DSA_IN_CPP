
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1,
                               vector<int>& nums2,
                               int k1, int k2) {
        int n = nums1.size();
        vector<int> diff(n);

        long long k = (long long)k1 + k2;
        int mx = 0;
        long long total = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            mx = max(mx, diff[i]);
            total += diff[i];
        }

        if (total <= k)
            return 0;

        // Find the smallest achievable maximum difference
        int low = 0, high = mx;

        while (low < high) {
            int mid = low + (high - low) / 2;
            long long needed = 0;

            for (int x : diff) {
                if (x > mid)
                    needed += x - mid;
            }

            if (needed <= k)
                high = mid;
            else
                low = mid + 1;
        }

        int target = low;
        long long used = 0;
        long long ans = 0;

        for (int x : diff) {
            if (x > target)
                used += x - target;

            long long y = min(x, target);
            ans += y * y;
        }

        
        long long remaining = k - used;

        ans -= remaining * (2LL * target - 1);

        return ans;
    }
};
