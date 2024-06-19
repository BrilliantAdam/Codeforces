//brilliantadam
//19/6/2024
//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if (m * (long long)k > n) return -1;

        auto canMakeBouquets = [&](int days) -> bool {
            int bouquets = 0;
            int flowers = 0;
            for (int bloom : bloomDay) {
                if (bloom <= days) {
                    flowers++;
                    if (flowers == k) {
                        bouquets++;
                        flowers = 0;
                        if (bouquets == m) return true; // Early stopping
                    }
                } else {
                    flowers = 0;
                }
            }
            return bouquets >= m;
        };

        int left = 1, right = *max_element(bloomDay.begin(), bloomDay.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canMakeBouquets(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};
