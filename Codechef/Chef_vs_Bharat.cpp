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

#define mod 1000000007
const ll no = 100001;
ll a[no];
ll pa[no];

ll ipow(ll base, ll exp)
{
    ll result = 1;
    while(exp)
    {
        if (exp%2==1){
            result = ((result%mod)*(base%mod))%mod;
            exp--;
        }
        else{
            base = ((base%mod)*(base%mod))%mod;
            exp /= 2;
        }
    }
    return result;
}

ll Chefora(ll n){
    ll ans,div;
    div = n;
    if(n < 10)
        return n;
    else
    {
        n /= 10;
        while(n){
            div =((div*10) + n%10);
            n /= 10;
        }
        return div;
    }
    
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    for (ll i = 1; i < no; i++)
    {
        a[i] = Chefora(i);
        pa[i] = (a[i] + pa[i-1]);
    }
    

    ll t;
    cin >> t;
    while(t--) {
        ll l,r;
        cin>>l>>r;
        ll ad = pa[r] - pa[l];
        cout<<ipow(a[l] , ad)<<"\n";
    }

    return 0;
}


