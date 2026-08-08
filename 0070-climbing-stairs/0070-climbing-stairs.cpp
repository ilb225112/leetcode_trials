class Solution {
public:
    int climbStairs(int n){
        if(n==0) return 0;
        if(n<=2) return n;
        int curr=2,prev1=1,prev2=1;

        for(int i=3;i<=n;i++){
            prev2=prev1,prev1=curr;
            curr=prev2+prev1;
        }
        return curr;
    }
};