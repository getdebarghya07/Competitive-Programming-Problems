#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define REP(i,a,b) for (i = a; i <= b; i++)
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define nl "\n"
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

long long ipow(long long base, long long exp){
  long long result = 1;
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

vi adj[100003];
bool vis[100003];
vi dis(100003,INT_MAX);
vi par(100003,-1);

bool bfs(int n, int source, int dest){
    
    list<int>q;
    q.push_back(1);
    dis[source] = 0;
    vis[source] = 1;
    while(!q.empty()){
        int f = q.front();
        q.pop_front();
        for (int i = 0; i < adj[f].size(); i++)
        {
            if(!vis[adj[f][i]]){
                vis[adj[f][i]] == 1;
                dis[adj[f][i]] = dis[f] + 1;
                par[adj[f][i]] = f;
                q.push_back(adj[f][i]);
                if (adj[f][i] == dest)
                    return true;
            }
        } 
    }
    return false;
}


void solve() {
    // your code goes here...
    ll n, m;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    
    //bfs(n,1,n,dis,par);
    if (bfs(n,1,n) == false) {
        cout<<"IMPOSSIBLE"<<nl;
    }
    
    else{
        vi path;
        int crawl = n;
        path.push_back(crawl);
        while (par[crawl] != -1) {
            path.push_back(par[crawl]);
            crawl = par[crawl];
        }

        cout<< path.size()<<nl;
        for (int i = path.size() - 1; i >= 0; i--){
            cout << path[i] << " ";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}


