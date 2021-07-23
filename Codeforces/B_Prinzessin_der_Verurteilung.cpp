#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ans[26]={0};
    for (int i = 0; i < n; i++)
    {
        ans[s[i]-'a']=1;
    }
    for (int i = 0; i < 26; i++)
    {
        if(ans[i]==0){
            cout<<(char)('a'+i)<<endl;
            return;
        }
    }

    set<string>two;
    for(int i=0;i<n-1;i++)
    {
      string temp="";
      temp+=s[i];
      temp+=s[i+1];
      two.insert(temp);
    }
    for(int i=0;i<26;i++)
    {
      for(int j=0;j<26;j++)
      {
        string temp="";
        temp+=(char)('a'+i);
        temp+=(char)('a'+j);
        if(two.find(temp)==two.end())
        {
          cout<<temp<<endl;
          return;
        }
      }
    }
 
      set<string>three;
      for(int i=0;i<n-2;i++)
      {
        string temp="";
        temp+=s[i];
        temp+=s[i+1];
        temp+=s[i+2];
        three.insert(temp);
      }
      
      for(int i=0;i<26;i++)
      {
        for(int j=0;j<26;j++)
        {
          {
              string temp="a";
              temp+=(char)('a'+i);
              temp+=(char)('a'+j);
              if(three.find(temp)==three.end())
              {
                cout<<temp<<endl;
                return;
              }
          }
        }
      }
}




int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}