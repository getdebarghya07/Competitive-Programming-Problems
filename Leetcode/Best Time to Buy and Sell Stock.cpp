class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy,sell,bind,sind,sum;
        buy=sell=prices[0];
        bind=sind=sum=0;
        for (int i = 1; i < n; i++)
        {
            if(buy > prices[i]){
                bind = i;
                sind = i;
                buy = prices[i];
                sell = prices[i];
            }
            if(sell < prices[i]){
                sind = i;
                sell = prices[i];
            }
            sum = max(sum, prices[sind]-prices[bind]);
        }
        return sum;
    }
};