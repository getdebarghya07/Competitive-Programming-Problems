#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;cin>>s;
    vector<int>store;
    int mx = 0;
    int i = 0;
    int j = 0;
    s+='*';
    int a = s.length();
    while (j < a)
    {
        if (s[i] == s[j]) mx++;
        else store.push_back(mx),mx = 1,i = j;
        j++;
    }
    cout<<*max_element(store.begin(),store.end())<<"\n";
    return 0;
}