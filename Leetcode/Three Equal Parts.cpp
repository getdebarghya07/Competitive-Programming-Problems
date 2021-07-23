class Solution {
   public:
   vector<int> threeEqualParts(vector<int>& arr){
      vector<int> ret(2, -1);
      int num = 0;
      int n = arr.size();
      for (int i = 0; i < n; i++) {
         num += (arr[i] == 1);
      }
      if (num % 3 != 0)
         return ret;
      if (num == 0) {
         return { 0, 2 };
      }
      int req = num / 3;
      int idx = n - 1;
      for (int temp = 0; idx >= 0 && temp < req; idx--) {
         temp += arr[idx] == 1;
      }
      idx++;
      int firstEnd = getIdx(arr, 0, idx);
      if (firstEnd < 0)
         return ret;
      int secondEnd = getIdx(arr, firstEnd + 1, idx);
      if (secondEnd < 0)
         return ret;
      return { firstEnd, secondEnd + 1 };
   }
   int getIdx(vector<int>& arr, int left, int right){
      while (left < right && arr[left] == 0)
      left++;
      while (right < (int)arr.size()) {
         if (arr[left] != arr[right])
            return -1;
         left++;
         right++;
      }
      return left - 1;
   }
};