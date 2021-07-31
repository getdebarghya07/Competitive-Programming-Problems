//Input: s = "abaac", cost = [1,2,3,4,5]
//Output: 3
//Input: s = "aabaa", cost = [1,2,3,4,1]
//Output: 2
class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        if(s.length()==1)return 0;
        char temp = s[0];
        vector<int> ind[26];
        vector<int> count[26];
        int n = cost.size();
        int cnt = 1;
        s+= "0";
        priority_queue<int>pq;
        int ans = 0;
        int cos = 0;
        for (int i = 1; i <= n; i++)
        {
            if(s[i]==temp){
                cnt++;
                cos += cost[i-1];
                pq.push(cost[i-1]);
            }
            else{
                if(cnt > 1){
                    cos += cost[i-1];
                    pq.push(cost[i-1]);
                    ans += cos - pq.top();
                     while(!pq.empty()){
                        pq.pop();
                    }
                }
                cnt=1;
                cos = 0;
            }
            temp = s[i];
        }
        return ans;
    }
};