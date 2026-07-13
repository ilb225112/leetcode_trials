class Solution {
public:
    #define MOD 1000000007
    long long power(long pow,long base){
        long long ans=1;
        base=base%MOD;

        while(pow>0){
            if(pow&1)
                ans=(ans*base)%MOD;
            base=(base*base)%MOD;
            pow>>=1;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long odd=n>>1;
        long long even=(n+1)>>1;

        return (power(odd,4)*power(even,5))%MOD;
    }
};