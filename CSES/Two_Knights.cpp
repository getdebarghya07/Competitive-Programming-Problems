#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;cin>>n;
    for(long long i = 1;i <= n; i++)
    {
        long long ans = ((i*i)*((i*i)-1) - 8 - 24 - (i-4)*16 - 16 - (i-4)*24 - (i-4)*(i-4)*8)/2;
        cout<<ans<<endl;
    }
    return 0;
}