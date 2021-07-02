#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int mod = 1000000007;
 
int main()
{
    string s;cin>>s;
    int a[26] = {0};
    for(int i = 0; i < s.size(); i++)
    {
        a[s[i] - 65]++;
    }
 
    int cnt = 0;
    for(int i = 0; i < 26; i++)
    {
        if(a[i] % 2 != 0)
            cnt++;
    }
 
    if(cnt > 1)
        cout<<"NO SOLUTION\n";
 
    else
    {
        vector<char> v1,v2;
        for(int i = 0; i < 26; i++)
        {
            if(a[i] % 2 != 0)
                while(a[i]--)
                    v2.push_back(i + 65);
 
            else
            {
                int x = a[i] / 2;
                while(x--)
                    v1.push_back(i + 65);
            }
        }
 
        int n = v1.size();
        int m = v2.size();
        for(int i = 0; i < n; i++)
            cout<<v1[i];
        for(int i = 0; i < m; i++)
            cout<<v2[i];
        for(int i = n - 1; i >= 0; i--)
            cout<<v1[i];
 
        cout<<"\n";
    }
    
    return 0;
}