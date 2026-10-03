class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0,ele;
        for(int i = 0;i < nums.size();i++){
            if(count == 0){
                ele = nums[i];
                count++;
            }
            else if(ele == nums[i]) count++;
            else count--;
        }
        int cnt1 = 0;
        for(int i = 0;i < nums.size();i++){
            if(ele == nums[i]) cnt1++;
        }
        if(cnt1 > (nums.size())/2) return ele;
        return -1;
    }
};