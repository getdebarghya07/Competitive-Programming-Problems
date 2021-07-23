class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();
        int j=0;
        int cnt = 0;
        bool done = false;
        if(m==0&&n==0) return true;
        for (int i = 0; i < n; i++)
        {  
            if(t[i]==s[j]){
                cnt++;
                j++;
            }
             if(cnt==m){
                done = true;
                break;
            }
        }
        return done;
    }
};