//Input: s = "abaac", cost = [1,2,3,4,5]
//Output: 3
//Input: s = "aabaa", cost = [1,2,3,4,1]
//Output: 2
class Solution {
public:
     if(j-1 >= 0){
                dp[i][j] = max(a[i+1][j] , max(dp[i+1][j-1] , dp[i+1][j+1])) + dp[i][j];
            }
            if(j-1 < 0){
                dp[i][j] = max(a[i+1][j] ,  dp[i+1][j+1])+ dp[i][j];
            }
            else if(j+1 < c){
                dp[i][j] = max(a[i+1][j] , max(dp[i+1][j-1] , dp[i+1][j+1])) + dp[i][j];
            }
};