class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";
        while(columnNumber){
            columnNumber--;
            int num = columnNumber%26;
            string += (char)(num+65);
            columnNumber /= 26;
        }
        return reverse(s.begin(),s.end());
    }
};