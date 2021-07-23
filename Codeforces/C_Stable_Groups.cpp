#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	ll k, x;
	cin >> n >> k >> x;
	vector<ll> arr(n);
	for(int i=0; i < n; ++i) cin >> arr[i];
 
	sort(arr.begin(), arr.end());
 
	vector<ll> diff;
 
	for(int i=0; i+1 < n; ++i) {
		if(arr[i+1]-arr[i] > x) {
			diff.push_back((arr[i+1]-arr[i]-1)/x);
		}
	}
 
	sort(diff.begin(), diff.end());
 
	int j = 0;
	while(j < (int)diff.size() && diff[j] <= k) {
		k -= diff[j];
		j++;
	}
 
	cout << (int)diff.size()-j+1 << endl;

    return 0;
}