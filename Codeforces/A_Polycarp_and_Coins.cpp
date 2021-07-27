#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int c1, c2, k, c11, c22;
    k = n / 3;
    c2 = k;
    c1 = n - k * 2;
    if (n - 3 * k == 0)
        cout << c1 << " " << c2 << endl;
    else if ((n - 3 * k) % 2 == 0)
    {
        c2 += (n - 3 * k) / 2;
        c1 = k;
        cout << c1 << " " << c2 << endl;
    }
    else
    {
        c1 = k + 1;
        cout << c1 << " " << c2 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}