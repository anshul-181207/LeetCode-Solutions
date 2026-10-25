class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end()),high = 0;
        for(auto x: nums) high += x;
        while(low < high){
            int mid = low + (high - low)/2;
            int cnt = 1,pages = 0;
            for(int i = 0;i < nums.size();i++){
                if(pages + nums[i] <= mid) pages += nums[i];
                else{
                    cnt++;
                    pages = nums[i];
                }
            }
            if(cnt > k) low = mid +1;
            else high = mid;
        }
        return low;
    }
};