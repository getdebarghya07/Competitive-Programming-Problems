#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long k;cin>>k;
  while(k--){
    long long n,x,t;
    cin>>n>>x>>t;
    if(t > x){
      long long ratio = t/x;
      if(ratio >= n-1)
      {
        long long ans = n*(n-1)/2;
        cout<<ans<<"\n";
      }

      else{
        long long ans = ((n-ratio)*ratio + ratio*(ratio-1)/2);
        cout<<ans<<"\n";
      }
    }

    else if(t==x){
      cout<<n-1<<"\n";
    }

    else{
      cout<<"0\n";
    }
  }
}