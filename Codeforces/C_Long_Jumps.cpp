#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dfs(int a, vector<int> adj[], int temp, int arr[]){
    
    for (int i = 0; i < adj[a].size(); i++)
    {
        
        dfs(adj[a][i],adj,temp,arr);
        
    }
    temp += arr[a];
    return temp;
}

void solve(){
    int n;cin>>n;
    int a[n+1];
    a[0]=-1;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    vector<int>adj[n+1];
    adj[0].push_back(-1);
    for (int i = 1; i <= n; i++)
    {
        if(a[i]+i <= n)adj[i].push_back(a[i]+i);
    }
    int sum,mx,temp;
    sum=mx=temp=0;
    // for (int i =1; i <= n; i++)
    // {
    //     cout<<adj[i][0]<<" ";
    // }cout<<endl;
    
    for (int i = 1; i <= n; i++)
    {
        sum = dfs(i,adj,temp,a);
        mx = max(mx,sum);
        temp=0;
    }
    cout<<mx<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}