class Solution {
public:
    int binSearch(vector<int>& nums, int target, int start , int end){
        //nums = [-1,0,3,5,9,12], target = 9
        //nums = [-1,0,3,5,9,12], target = 2
        if(end >= start{
            int mid = (start+end)/2;
            if(target < nums[mid]){
                return binSearch(nums, target, start, mid-1);
            }
            else if(target > nums[mid]){
                return binSearch(nums, target, mid+1, end);
            }
            else if(target == nums[mid]){
                return mid;
            }

        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return binSearch(nums, target,0,n-1);
    }
};