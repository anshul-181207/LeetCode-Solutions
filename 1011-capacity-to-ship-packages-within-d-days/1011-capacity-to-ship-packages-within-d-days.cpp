class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end()),high = 0;
        for(int i = 0;i < weights.size();i++){
            high += weights[i];
        }
        while(low < high){
            int mid = low + (high - low)/2;
            int sum = 0,cnt = 0;
            for (int i = 0;i < weights.size();i++){
               if(sum + weights[i] > mid){
                cnt++;
                sum = weights[i];
               }else{
                sum += weights[i];
               }
            }
            if(cnt >= days) low = mid + 1;
            else high = mid;
        }
        return low;
    }
};