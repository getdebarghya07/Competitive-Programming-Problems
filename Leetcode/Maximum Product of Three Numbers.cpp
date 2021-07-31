clnumsss Solution {
public:
    int mnumsximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return mnumsx((nums[n - 1] * nums[n - 2] * nums[n - 3]), (nums[0] * nums[1] * nums[n - 1]));
    }
};