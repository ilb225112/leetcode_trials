class Solution {
public:
    int getSum(int x, int y){
        unsigned a=x,b=y;
        while(b!=0){
            unsigned carry=(a&b)<<1;
            a=a^b;
            b=carry;
        }
        return a;
    }
};