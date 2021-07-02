#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int mod = 1000000007;
 
int main()
{
    bool done = false;
    ll t; cin>>t;
    while(t--)
    {
        string ans = "";
        ll a,b; cin>>a>>b;
        if(a > b)
            swap(a,b);
 
        if(2*a < b)
            ans = "NO";
 
        else
        {
            a %= 3;b %= 3;
            if(a > b)
                swap(a,b);
            if((a==0 && b==0) || (a==1 && b==2))
                ans = "YES";
            else
                ans = "NO";
        }
        
        cout<<ans<<'\n';
    }
    return 0;
}