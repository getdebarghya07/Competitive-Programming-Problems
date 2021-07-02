#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int mod = 1000000007;
 
int main()
{
    ll n;cin>>n;
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = (ans * 2)%mod;
    }
    
    cout<<ans;
    return 0;
}