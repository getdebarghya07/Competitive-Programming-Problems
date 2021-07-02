#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;cin >> n;
    long long ans = n*(n+1)/2;
    if(ans % 2 == 0)
    {
        bool done = true;
        vector<int> a,b;
        if(n%2==0)
        {
            int p = n;
            while(true)
            {
                if(p == 0)
                    break;
                a.push_back(p);
                p--;
                b.push_back(p);
                p--;
                b.push_back(p);
                p--;
                a.push_back(p);
                p--;
            }
        }
 
        else
        {
            //cout<<"working";
            int p = n;
            while(true)
            {
                if(p == 3)
                {
                    a.push_back(2);
                    a.push_back(1);
                    b.push_back(3);
                    break;
                }
                a.push_back(p);
                p--;
                b.push_back(p);
                p--;
                b.push_back(p);
                p--;
                a.push_back(p);
                p--;
            }
        }
 
        cout<<"YES\n";
        cout<<a.size()<<"\n";
        for(int i=a.size() - 1; i >= 0;i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
 
        cout<<b.size()<<"\n";
        for(int i=b.size() - 1; i >= 0;i--)
        {
            cout<<b[i]<<" ";
        }
        cout<<'\n';
    }
 
    else
    {
        cout<<"NO\n";
    }
    
    return 0;
}