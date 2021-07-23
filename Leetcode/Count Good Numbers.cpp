class Solution {
public:
    long long ipow(long long base, long long exp , int mod){
        long long result = 1;
        while(exp)
        {
            if (exp%2==1){
                result = ((result%mod)*(base%mod))%mod;
                exp--;
            }
            else{
                base = ((base%mod)*(base%mod))%mod;
                exp /= 2;
            }
        }
        return result;
    }

public:
    int countGoodNumbers(long long n) {
        const int mod = 1e9+7;
        long long odd,even;
        if(n%2==1){
            even = 1 + n/2;
            odd = n/2;
        }
        else{
            even = odd = n/2;
        }
        long long ans = ipow(5,even,mod);
        ans = (ans * ipow(4,odd,mod))%mod;
        return ans;
    }
};