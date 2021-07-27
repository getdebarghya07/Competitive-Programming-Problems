#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    ll cnt = 0;
    s = '1' + s + '1';
    //cout << s << endl;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == '1' && s[i] == '0')
            cnt++;
    }
    //cout << cnt << endl;
    if (cnt == 0)
    {
        cout << cnt << endl;
    }
    else
    {
        cout << (cnt - 1) * min(x, y) + y << endl;
    }
    return 0;
}