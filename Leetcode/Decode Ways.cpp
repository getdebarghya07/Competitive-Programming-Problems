class Solution {
public:
    int numDecodings(string s) {
        if(s.length()==0 || s[0]=='0')return 0;
        if(s.length()==1) return 1;
        int prev,prev2;
        prev=prev2=1;
        for (int i = 1; i < s.length(); i++)
        {
            int cur=0;
            int curSum = s[i]-'0';
            int prevSum = (s[i-1]-'0')*10 + curSum;
            if(!curSum) cur+=prev;
            if(prevSum >= 10 && prevSum <= 26) cur+=prev2;
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};