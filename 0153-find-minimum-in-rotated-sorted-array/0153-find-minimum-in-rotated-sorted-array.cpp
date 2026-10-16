class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0,h = nums.size() - 1;
        int res = INT_MAX;
        for(i = 0;i < h;i++){
            if(nums[i] < nums[i + 1]) continue;
            else break;
        }
        if(h == 0) return nums[i];
        if(i == h) return nums[0];
        return nums[i + 1];
    }
};