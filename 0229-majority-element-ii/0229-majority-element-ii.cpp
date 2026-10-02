class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> fq;
        vector<int> res;

        for(auto x : nums)
            fq[x]++;

        for(auto x : fq) {
            if(x.second > nums.size() / 3)
                res.push_back(x.first);
        }

        return res;
    }
};