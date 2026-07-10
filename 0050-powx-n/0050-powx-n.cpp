class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1.0) return 1;
        double res=1.0;
        if(n<0){
            x=1/x;
            if(n==INT_MIN){
                n=INT_MAX;
                res=x;
            }
            else   
                n=0-n;
        }

        while(n){
            if(n%2)
                res*=x;
            n=n>>1;
            x*=x;
        }
        return res;
    }
};