class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy,sell,bind,sind,sum1,sum2;
        buy=sell=prices[0];
        bind=sind=sum1=0;
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
            sum1 = max(sum1, prices[sind]-prices[bind]);
        }

        /**********************/
       
        sum2=0;
        for (int i = 0; i < n-1; i++)
        {
            if(prices[i] < prices[i+1]){
                sum2 += prices[i+1] - prices[i];
                //i++;
            }
        }
        
        return max(sum1,sum2);
    }
};