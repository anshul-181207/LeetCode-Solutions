class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        map<int, int> mp;
        int cnt = 1, res = 1;

        for (auto x : nums) {
            mp[x]++;
        }

        for (auto it : mp) {
            if (mp.find(it.first + 1) != mp.end()) {
                cnt++;
            } else {
                res = max(res, cnt);
                cnt = 1;
            }
        }

        return res;
    }
};