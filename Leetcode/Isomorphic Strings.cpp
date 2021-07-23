class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        int mp[256];
        bool done[256] = {false};
        memset(mp, -1, sizeof(mp));
        for (int i = 0; i < n; i++)
        {
            if(mp[s[i]-'0'] == -1){
                if(done[t[i]-'0'])return false;
                done[t[i]-'0'] = true;
                mp[s[i]-'0'] = t[i]-'0';
            }
            else if(mp[s[i]-'0'] != t[i]-'0')return false;
        }
        return true;
    }
};