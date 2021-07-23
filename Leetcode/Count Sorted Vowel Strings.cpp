class Solution {
public:
    int countVowelStrings(int n) {
       int dp[n][5];
       memset(dp, 0, sizeof(dp));
       if(n==1)return 5;
       for (int i = 0; i < 5; i++)
       {
           dp[0][i] = 1;
       }
       int ans,temp;
       ans=temp=5;
       for (int i = 1; i < n; i++)
       {
           //ans = 0;
           dp[i][0] = temp;
           //ans += temp;
           for (int j = 1; j < 5; j++)
           {
                temp -= dp[i-1][j-1];
                ans += temp;
                dp[i][j] = temp;
           }
           temp = ans;
       }
       return ans;
    }
};