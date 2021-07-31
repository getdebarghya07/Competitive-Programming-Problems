class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gas_sum, cost_sum;
        gas_sum = cost_sum = 0;
        int n = gas.size();
        for(int i=0; i< gas.size(); i++){
            gas_sum += gas[i];
            cost_sum += cost[i];
        }
        if(cost_sum > gas_sum)return -1;
        int tank,start;
        tank=start=0;
        for (int i = 0; i < n; i++)
        {
            tank += gas[i] - cost[i];
            if(tank<0){
                start = i+1;
                tank=0;
            }
        }
        return start;
    }
};