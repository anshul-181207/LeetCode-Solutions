class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> m;
        for(auto it : nums) m[it]++;
        int max = 0,ele;
        for(auto it : m){
            if(it.second > max){
                max = it.second;
                ele = it.first;
            }
        }
        return ele;
    }
};