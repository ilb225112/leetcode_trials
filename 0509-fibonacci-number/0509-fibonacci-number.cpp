class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        vector<int> table(n+1,0);
        int a=0,b=1,csum=0;
        for(int i=2;i<=n;i++){
            csum=a+b;
            a=b;
            b=csum;
        }
        return csum;
    }
};