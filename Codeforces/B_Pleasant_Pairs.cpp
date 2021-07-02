#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<pair<ll,ll>>a;
        for (ll i = 0; i < n; i++)
        {
            ll val;
            cin>>val;
            a.push_back({val,i+1});
        }
        sort(a.begin(), a.end());
        ll ans = 0;
        for (ll i = 0; i < n-1; i++)
        {
            for (ll j = i+1; j < n; j++)
            {
                if((a[i].first * a[j].first) > 2*n ){
                    break;
                }
                if(a[j].first*a[i].first == a[i].second + a[j].second) ans++;
            }
            
        }
        cout<<ans<<"\n";
        
    }
   	return 0;
}
