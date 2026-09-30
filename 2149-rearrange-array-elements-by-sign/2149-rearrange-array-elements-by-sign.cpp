class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        for(auto it : nums){
            if(it < 0) negative.push_back(it);
            else positive.push_back(it); 
        }
        int i = 0,p = 0,n = 0;
        while(p < positive.size() && n < negative.size()){
            nums[i++] = positive[p++];
            nums[i++] = negative[n++];
        }
        return nums;
    }
};