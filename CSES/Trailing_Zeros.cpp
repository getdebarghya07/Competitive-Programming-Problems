#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int mod = 1000000007;
 
int main()
{
    ll n;cin>>n;
    ll ans = 0 , i = 1;
    while(true)
    {
        ll a = pow(5,i);
        if(a > n)
        {
            break;
        }
 
        ans += n/a;i++;
    }
    cout<<ans;
    return 0;
}