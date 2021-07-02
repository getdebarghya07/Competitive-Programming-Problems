//TIME COMPLEXITY O(nlog(n))
//SPACE COMPLEXITY O(n)

class Solution {
    
public:
     static bool comp(pair<int,int>p1 , pair<int,int>p2){
        if(p1.first < p2.first)
            return true;
        else if(p1.first == p2.first){
            if(p1.second < p2.second)
                return true;
        }
         
        return false;
    }
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>> pr;
        int n = arr.size();
        for(int i=0; i<n; i++){
            pr.push_back({abs(arr[i]-x) , arr[i]});
        }
        sort(pr.begin(),pr.end(),comp);
        vector <int> ans;

        for (int i = 0; i < k; i++)
        {
            ans.push_back(pr[i].second);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};