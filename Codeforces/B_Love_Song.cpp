#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n,q;
  cin>>n>>q;
  string s;
  cin>>s;
  int dp[100005];
  for(long long i=0; i<n; i++)
    dp[i+1] = dp[i] + s[i] - 'a' + 1;

  while(q--){
    int l,r;
    cin>>l>>r;
    long long ans = dp[r] - dp[l-1];
    cout<<ans<<"\n";
  }
}
