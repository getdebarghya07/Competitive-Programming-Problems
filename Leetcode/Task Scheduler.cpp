class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0)return tasks.size();
        if(tasks.size()==1) return 1;
        unordered_map<char,int>count;
        for(char c: tasks)count[c]++;
        priority_queue<int>pq;
        for(char c: tasks){
            pq.push(count[c]);
        }
        int ans = 0;
        vector<int>temp;
        while(!pq.empty()){
            int last_size = 0;
            for (int i = 0; i < n+1; i++)
            {
                if(!pq.empty()){
                    int a = pq.top()-1;
                    pq.pop();
                    if(a != 0)temp.push_back(a);
                    last_size++;
                }
            }
            for(auto it: temp)pq.push(it);
            ans += pq.empty() ? last_size : n+1;
        }
        return ans;
        
    }
};