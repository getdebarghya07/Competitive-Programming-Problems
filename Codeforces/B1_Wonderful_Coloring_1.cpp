#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    // 5
    // kzaaa
    //k1 z1 a3
    // codeforces
    //c2 o2 e2 d f r s
    // archive
    //a1 c1 e1 h1 i1 r1 v1
    // y
    // xxxxxx
    string s;
    cin >> s;
    set<int> st(s.begin(), s.end());
    int n = s.size();
    vector<int> a(26);
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 97]++;
    }
    //sort(a.begin(), a.end());
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    int m = st.size();
    if (n == m)
        cout << n / 2 << endl;
    else if (n == 1)
        cout << 0 << endl;
    else
    {
        int cnt = 0;
        int cnt1 = 0;
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != 0)
            {
                if (a[i] == 1)
                {
                    cnt1++;
                    continue;
                }

                else
                    cnt += 1;
            }
        }
        cnt += cnt1 / 2;
        cout << cnt << endl;
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