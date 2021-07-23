class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int dp[n];
        for (int i = 0; i < n; i++)
        {
            dp[i] = 1;
        }
        
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if(nums[i]>nums[j] && dp[i]<dp[j]+1)
                    dp[i] = dp[j] +1;
            }
        }
        int ans = *max_element(dp,dp+n);
        return ans;
    }
};