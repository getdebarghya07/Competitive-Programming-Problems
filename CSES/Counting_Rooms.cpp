#include <bits/stdc++.h>
using namespace std;
const int nxm = 1e3;
int n,m;
string s[nxm];
bool visited(int x, int y)
{
    return x>=0&&x<n&&y>=0&&y<m&&s[x][y]=='.';
}
void dfs(int x,int y)
{
    s[x][y]='#';
    if (visited(x,y-1))
        dfs(x,y-1);
    if (visited(x,y+1))
        dfs(x,y+1);
    if (visited(x-1,y))
        dfs(x-1,y);
    if (visited(x+1,y))
        dfs(x+1,y);
}
 
int main() {
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>s[i];
    }
    int ans=0;
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            if (visited(j,i))
                dfs(j,i),ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}