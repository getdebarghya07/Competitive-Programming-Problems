class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //-8 -6 -5 -2 -1  //7
        //-4 -1 1 2  //1
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mn = nums[0] + nums[1] + nums[n-1];;
        for(int i=0; i<n-2; i++){
            int j =i+1;
            int k = n-1;
            int sum;
            while(j<k){
                sum = nums[i] + nums[j] + nums[k];
                if(sum == target) return sum;
                if(sum > target) k--;
                else if(sum < target) j++;
                if(abs(mn-target) > abs(sum-target)) mn =sum;
            }   
        }
        return mn;
    }
};