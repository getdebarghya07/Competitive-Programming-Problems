#include <iostream>
using namespace std;
int main() {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    if(n==1) cout<<0<<'\n';
    else
    {
        long long sum = 0;
        for (int i = 1; i < n; ++i) {
            if(a[i] < a[i-1])
                sum += a[i-1] - a[i], a[i] = a[i-1];
        }
        cout<<sum<<'\n';
    }
    return 0;
}