class Solution {
public:
        int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int row = matrix.size(), col = matrix[0].size(), res = INT_MIN;
        for (int l1 = 0; l1 < col; ++l1) {
            vector<int> sums(row, 0);
            for (int l2 = l1; l2 < col; ++l2) {
                for (int r = 0; r < row; ++r) {
                    sums[r] += matrix[r][l2];
                }

                // Find the max subarray no more than K 
                set<int> temp;
                temp.insert(0);
                int curSum = 0, curMax = INT_MIN;
                for (int sum : sums) {
                    curSum += sum;
                    set<int>::iterator it = temp.lower_bound(curSum - k);
                    if (it != temp.end()) curMax = max(curMax, curSum - *it);
                    temp.insert(curSum);
                }
                res = max(res, curMax);
            }
        }
        return res;
    }

};