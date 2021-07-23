class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int w,x,y,z;
        w = nums[n-1]; x = nums[n-2];
        y = nums[0]; z = nums[1];
        int ans = w*x-y*z;
        return ans;
    }
};