#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%2==0){
            for (int i = 0; i < n; i++)
            {
                if(i%2==0) cout<<i+2<<" ";
                else cout<<i<<" ";
                /* code */
            }
            cout<<"\n";
        }

        else{
            cout<<"3 1 2"<<" ";
            for (int i = 3; i < n; i++)
            {
                if(i%2!=0) cout<<i+2<<" ";
                else cout<<i<<" ";
                /* code */
            }
            cout<<"\n";
        }
    }
   	return 0;
}
