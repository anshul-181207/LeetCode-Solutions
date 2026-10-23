
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if (1LL * bloomDay.size() < 1LL * m * k) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low < high) {
            int mid = low + (high - low) / 2;
            int cnt = 0;
            int res = 0;

            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid) {
                    cnt++;
                } else {
                    res += cnt / k;
                    cnt = 0;
                }
            }

            res += cnt / k;

            if (res < m) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};
