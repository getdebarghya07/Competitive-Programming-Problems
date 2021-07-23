#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < 11; i++)
    {
        if (n % 11 == 0)
        {
            cout << "YES\n";
            return;
        }
        n -= 111;

        if (n < 0)
        {
            break;
        }
    }
    cout << "NO\n";
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