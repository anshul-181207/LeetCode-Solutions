class Solution {
public:
    bool search(vector<int>& a, int target) {
        int l = 0, h = a.size() - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (a[mid] == target) return true;

            // Ambiguous due to duplicates
            if (a[l] == a[mid] && a[mid] == a[h]) {
                l++;
                h--;
                continue;
            }

            // Left half is sorted
            if (a[l] <= a[mid]) {
                if (a[l] <= target && target < a[mid])
                    h = mid - 1;
                else
                    l = mid + 1;
            }
            // Right half is sorted
            else {
                if (a[mid] < target && target <= a[h])
                    l = mid + 1;
                else
                    h = mid - 1;
            }
        }

        return false;
    }
};