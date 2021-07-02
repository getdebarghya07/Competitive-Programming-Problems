#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int mod = 1000000007;
 
vector<string> greycode(ll n)
{
    if(n <= 0)
        return {"0"};
 
    if(n == 1)
        return {"0","1"};
 
    vector<string> recans = greycode(n-1);
    vector<string> mainans;
 
    for (int i = 0; i < recans.size(); i++)
    {
        string s = "0" + recans[i];
        mainans.push_back(s);
    }
 
    for (int i = recans.size() - 1; i >= 0; i--)
    {
        string s = "1" + recans[i];
        mainans.push_back(s);
    }
 
    return mainans;
    
}
 
int main()
{
    ll n;cin>>n;
    vector<string> arr = greycode(n);
 
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<'\n';
    }
    return 0;
}