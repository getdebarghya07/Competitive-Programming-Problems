class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        vector<int> str(n);
        for (int i = 0; i < n; i++)
        {
            str[i] = s[i]-97;
        }
        
        vector<int> pos[26];
        for (int i = 0; i < n; i++)
        {
            pos[s[i]-97].push_back(i);
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if(pos[i].size() > 1){
                int start,end;
                start = pos[i][0];
                end = pos[i][pos[i].size()-1];
                set<int> s(str.begin()+start+1,str.begin()+end);
                //cout<<s.size()<<endl;
                ans += s.size();
            }
        }
        return ans;
    }
};0