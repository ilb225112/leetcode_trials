class Solution {
public:
    long long sumAndMultiply(int n) {
        int x=0,sum=0;
        while(n>0){
            if(n%10){
                x*=10;
                x+=n%10;
                sum+=n%10;
            }
            n/=10;
        }
        n=x;
        x=0;
        while(n>0){
            x=x*10+n%10;
            n/=10;
        }

        return (long long)sum * x;
    }
};