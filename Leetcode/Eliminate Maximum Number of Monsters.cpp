class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<double> order;
        for (int i = 0; i < n; i++)
        {
            double x = (double)dist[i]/(double)speed[i];
            order.push_back(x);
        }
        sort(order.begin(),order.end());
        int time=0;int ans =0;
        for (int i = 0; i < order.size(); i++)
        {
            if(order[i] <= time)
                break;
            time++;ans++;
        }
        return ans;
    }
};