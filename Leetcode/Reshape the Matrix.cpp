class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size(), n = nums[0].size();
        if (m * n != r * c) {
            return nums;
        }
        vector<vector<int>> ans(r, vector<int>(c, 0));
        int x=0,y=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                ans[x][y]=nums[i][j];
                y++;
                if(y==c){
                    x++;
                    y=0;
                }
            }
        }
        return ans;
    }
};