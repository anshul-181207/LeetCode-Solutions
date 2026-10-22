class Solution {
public:
    int mySqrt(int x) {
        int low = 0,high = x;
        int res;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(1LL*mid*mid == x){
                res = mid;
                break;
            }else if(1LL*mid*mid < x){
                low = mid + 1;
                res = mid;
            }else{
                high = mid - 1;
            }
        }
        return res;
    }
};