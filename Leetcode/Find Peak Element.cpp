class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n+2);
        temp[0] = temp[n+1] = INT_MIN;
        for (int i = 1; i < n+1; i++)
        {
            temp[i] = nums[i-1];
        }
        int low = 0;
        int high = n+1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(temp[mid] > temp[mid+1] && temp[mid] > temp[mid-1])return mid-1;
            else if(temp[mid] < temp[mid+1]) low = mid+1;
            else high = mid-1;
        }
        return 0;
    }
};