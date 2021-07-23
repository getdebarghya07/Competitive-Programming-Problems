#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int cnt1,cnt0;
    cnt1=cnt0=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0')cnt0++;
        else cnt1++;
    }
    if(cnt0==0){
        cout<<"DRAW\n";
        return;
    }
    if(cnt0==1){
        cout<<"BOB\n";
        return;
    }
    if(cnt0==3){
        cout<<"ALICE\n";
        return;
    }
    else{
        if(cnt0%2==0){
            cout<<"BOB\n";
            return;
        }
        else{
            cout<<"ALICE\n";
            return;
        }
    }
    
}




int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}