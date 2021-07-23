class Solution {
   public:
        int minSetSize(vector<int>& arr) {
            map<int,int>mp;
            int n = arr.size();
            for (int i = 0; i < n; i++)
            {
                mp[arr[i]]++;
            }

            int cnt = n;
            int ans = 0;
    
            vector<int>no;
            for (int i = 0; i < mp.size(); i++)
            {
                no.push_back(mp[i]);   
            }
            sort(no.begin(),no.end(),greater<int>());
            
            // for (int i = 0; i < no.size(); i++)
            // {
            //     cout<<no[i]<<" ";
            // }
            // cout<<endl;
            
            for (int i = 0; i < no.size(); i++)
            {
                if(2*cnt > n){
                    cnt -= no[i];
                    ans++;
                }
                else
                {
                    break;
                }
                
            }
            
            return ans;
    }
};
