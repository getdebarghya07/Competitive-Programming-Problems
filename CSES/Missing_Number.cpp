#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;cin>>n;
    unordered_map<int,int>mp;
    for (int i = 0; i < n-1; ++i) {
        int a;
        cin>>a;
        mp[a]++;
    }
    int ans;
    for (int i = 1; i <= n; ++i) {
        if (mp[i]==0)
        {
            ans = i;break;
        }
    }
    cout<<ans<<'\n';
    return 0;
}