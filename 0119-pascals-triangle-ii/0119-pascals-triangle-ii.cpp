
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        long long x = 1;

        for (int j = 0; j <= rowIndex; j++) {
            res.push_back(x);
            x = x * (rowIndex - j) / (j + 1);
        }

        return res;
    }
};
