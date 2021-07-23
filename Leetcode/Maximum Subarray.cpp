class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(nums.begin(),nums.end());
        sort(temp.begin(),temp.end());
        if(temp[0] == -1) return-1;
        int gmax,lmax,sum;
        lmax = gmax = sum = 0;
        for (int i = 0; i < n; i++)
        {
            lmax += nums[i];
            if(lmax < 0)
                lmax = 0;
            if(lmax > gmax)
                gmax = lmax;
        }
        return gmax;
    }
};