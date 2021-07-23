class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int ans,il,ir,cur;
        ans=cur=0;
        il=ir=-1;
        for (int i = 0; i < n; i++)
        {
            if(seats[i]){
                cur=0;
                if(il == -1)il=i;
                ir=i;
            }
            else
            {
                cur++;
                ans = max(ans,(cur+1)/2);
            }
        }
        ans = max(ans, max(il,n-ir-1));
        return ans;
    }
};