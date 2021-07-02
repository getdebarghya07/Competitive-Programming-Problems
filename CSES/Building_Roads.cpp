#include<bits/stdc++.h>
using namespace std;
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
const int mod = 1'000'000'007;
vector<int>adj[static_cast<int>(1e6)];
bool vis[static_cast<int>(1e6)];
vi grp[100009];
 
int dfs(int n, int i)
{
    vis[n]= true;
    grp[i].push_back(n);
    for(auto & it : adj[n])
    {
        if (!vis[it])
            dfs(it,i);
    }
    return grp[i][0];
}
 
void solve() {
    int n, m;
    cin>>n>>m;
    for (int k = 0; k < m; ++k) {
        int i,j;
        cin>>i>>j;
        adj[i].push_back(j);
        adj[j].push_back(i);
    }
    clr(vis);
    int a = 0;
    vi ans;
    for (int l = 1; l <= n; ++l) {
        if (!vis[l])
        {
            a++;
            ans.push_back(dfs(l,a));
        }
    }
    cout<<a-1<<endl;
    //cout<<ans[1];
    if (a!=1)
    {
        for (unsigned int i = 0; i < ans.size()-1; ++i)
        {
            cout<<ans[i]<<" "<<ans[i+1]<<endl;
        }
    }
}
 
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 
    int t=1;
    //cin >> t;
    while(t--) {
        solve();
    }
 
    return 0;
}