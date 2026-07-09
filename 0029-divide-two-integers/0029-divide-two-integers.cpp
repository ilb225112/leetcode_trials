class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        if(divisor==1) return dividend;
        if(divisor==-1 && dividend==INT_MIN) return INT_MAX;

        bool flag=(divisor<0)==(dividend<0);
        int res=0;

        int m=dividend<0? dividend: -dividend;
        int n=divisor<0? divisor:-divisor;

        while(m<=n){
            int temp=n;
            int q=0;
            while (temp >= (INT_MIN >> 1) && m <= (temp << 1)) {
                temp <<= 1;
                q++;
            }
            res+=(1<<q);
            m-=temp;
        }
        
        return (flag)?res:-res;
    }
};