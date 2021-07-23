#include <bits/stdc++.h>
#define ll long long 
 
using namespace std;
 
int main() {
	// your code goes here
    int a,b,c,d;cin>>a>>b>>c>>d;
    int e = (c*d-b);
    if(e <= 0){
        cout<< "-1\n";
    }
 
    else{
        int f = a/e;
        if(a % e == 0){
            cout<<f<<"\n";
        }
        else
        {
            cout<<f+1<<"\n";
        }
    }
}