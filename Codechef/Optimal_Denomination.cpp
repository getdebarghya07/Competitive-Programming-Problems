#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}

const int mod = 1'000'000'007;


void solve() {
    // your code goes here...
    ll n;
    cin>>n;
    ll a[n];
    ll i;
    fo(i,n)cin>>a[i];
    sort(a, a+n);
    ll mn = a[0];
    vi cnt;
    for (ll j = 1; j < n; j++)
    {
        if(a[i] % mn != 0)
            cnt.pb(a[i]);
        else
        {
            continue;
        }
    }

    ll sz = cnt.size();
    if(sz == 1){
        ll ans = 0;
        fo(i,n){
            if(a[i] == cnt[0]){
                ans ++;
            }
            else
            {
                ans += a[i]/mn;
            }
        }
        cout<<ans<<endl;
    }
    else if(sz == 0){
        ll ans = 0;
        fo(i,n-1){
            ans += a[i]/mn;
        }
        ans++;
        cout<<ans<<endl;
    }

    else{
        ll ans = 0;
        fo(i,n){
            ans += a[i];
        }
        cout<<ans<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}


