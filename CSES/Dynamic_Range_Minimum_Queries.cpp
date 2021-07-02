#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int mod = 1'000'000'007;
 
struct segtree
{
    int size;
    vl values;
 
    void init(int n)
    {
        // for initialization
        size=1;
        while (size < n) size *= 2; // building branches
        values.assign(2*size,0LL); // created an empty seg tree and filled with zeroes
    }
 
    void build(vi &a , int x , int lx , int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < (int)a.size())
            {
                values[x] = a[lx];
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a,2*x+1,lx,m);
        build(a,2*x+2,m,rx);
        values[x] = min ( values[2*x+1] , values[2*x+2] ) ;
    }
    void build(vi &a)
    {
        build(a,0,0,size);
    }
    void set(int i, int v , int x , int lx , int rx)
    {
        if (rx - lx == 1)
        {
            // if we are at the bottom , at the leaf noedes just assign the value
            values[x] = v;
            return;
        }
 
        int m = (lx + rx) / 2;
        if (i < m)
            set(i,v,2*x+1,lx,m); // left subtree
        else
            set(i,v,2*x+2,m,rx); // right subtree
        values[x] = min ( values[2*x+1] , values[2*x+2] ); // calc values and storing in each node
    }
 
    void set(int i, int v)
    {
        set(i,v,0,0,size);
    }
 
    ll min_querry(int l,int r,int x,int lx,int rx)
    {
        //x currnt node;
        if (lx >= r || l >= rx)
            return INT_MAX; // no overlapping. case 1.
        if (lx >= l && rx <= r)
            return values[x];  // complete overlapping . case 2.
        // else partial overlapping. case 3.
        int m =(lx + rx)/2;
        ll s1 = min_querry(l ,r ,2 * x + 1 , lx , m); // left partial min_querry
        ll s2 = min_querry(l , r , 2* x + 2, m , rx); // right partial min_querry
        return min (s1 , s2);
    }
 
    ll min_querry(int l,int r)
    {
        return min_querry(l,r,0,0,size);
    }
};
 
//@author Debarghya
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        segtree st; // declaring a structure segtree st
        st.init(n); // initializing st
 
        // nlogn time
        /*for (int i = 0; i < n; ++i) {
            int v;
            cin>>v;
            st.set(i,v);
            //set fun works in logn time
        }*/
 
        // linear time O(n)
        vi a(n);
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        st.build(a);
 
        while (m--)
        {
            int op;cin>>op;
            if (op == 1)
            {
                int i,v;
                cin>>i>>v;
                st.set(i-1,v);
            }
            else
            {
                int l,r;cin>>l>>r;
                cout<<st.min_querry(l-1,r)<<endl;
            }
        }
    }
 
    return 0;
}