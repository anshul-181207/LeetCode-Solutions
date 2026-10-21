class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1,high = *max_element(piles.begin(),piles.end()),ans = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long sum = 0;
            for(int i = 0;i < piles.size();i++){
                sum += ceil((double)piles[i] / mid);
            }
            if(sum > h) low = mid + 1;
            else{
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};