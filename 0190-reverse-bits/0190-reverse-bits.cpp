class Solution {
public:
    int reverseBits(int n) {
        int i=31,res=0;
        while(i>=0){
            res|=(n&1)<<i;
            i--;
            n>>=1;
        }
        return res;
    }
};