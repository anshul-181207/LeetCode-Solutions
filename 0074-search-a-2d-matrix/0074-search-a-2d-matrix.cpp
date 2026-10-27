class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        if(a.empty() || a[0].empty()) return false;
        int l1 = 0,l2 = 0,h1 = a.size() - 1,h2 = a[0].size() - 1;
        int mid1,mid2;
        
        if(target < a[0][0] || target > a[h1][h2]) return false;
        while(l1 <= h1){
            mid1 = (l1 + h1)/2;
            if(target < a[mid1][0]) h1 = mid1 - 1;
            else if(target > a[mid1][0]) l1 = mid1 + 1;
            else return true;
        } 

        mid1 = l1 - 1;
        if(mid1 < 0 || target > a[mid1][h2]) return false;

        while(l2 <= h2){
            mid2 = (l2 + h2)/2;
            if(a[mid1][mid2] < target) l2 = mid2 + 1;
            else if(a[mid1][mid2] > target) h2 = mid2 - 1;
            else return true;
        }
        return false;
    }
};