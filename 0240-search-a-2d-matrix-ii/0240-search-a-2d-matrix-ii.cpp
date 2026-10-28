class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;
        int rows = 0 , col = matrix[0].size() - 1; 
        while(rows < matrix.size() && col >= 0){
            if(matrix[rows][col] == target) return true;
            else if(matrix[rows][col] > target) col--;
            else rows++;
        }
        return false;
    }
};