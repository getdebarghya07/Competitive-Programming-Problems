class Solution {
   public:
   string customSortString(string S, string T) {
      string ans = "";
      unordered_map <char, int> mp;
      for(int i = 0; i < T.size(); i++){
         mp[T[i]]++;
      }
      for(int i = 0; i < S.size(); i++){
         char x = S[i];
         for(int j = 0; j < mp[x]; j++){
            ans += x;
         }
         mp[x] = 0;
      }
      unordered_map <char, int> :: iterator it = mp.begin();
      while(it != mp.end()){
         if(it->second > 0){
            for(int i = 0; i < it->second; i++)ans += it->first;
         }
         it++;
      }
      return ans;
   }
};