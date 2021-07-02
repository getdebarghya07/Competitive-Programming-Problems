#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    vector<int>o,e;
    for (int i = n; i > 0 ; --i) {
        if(i%2==1) o.push_back(i);
        else e.push_back(i);
    }
    if(n==2 || n==3) cout<<"NO SOLUTION\n";
    else{
        for(auto i: o)
        {
            cout<<i<<' ';
        }
 
        for(auto i: e)
        {
            cout<<i<<' ';
        }
        cout<<'\n';
    }
    return 0;
}