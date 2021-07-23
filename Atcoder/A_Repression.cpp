#include <bits/stdc++.h>
#define ll long long 
 
using namespace std;
 
int main() {
	// your code goes here
    int a[2];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<a[2]+a[1]<<"\n";    
	return 0;
}