class Solution {
public:
    int climbStair(int n,vector<int>& dp) {
        if(n<=1) return 1;
        if(n==2) return 2;
        if(dp[n]!=-1) return dp[n];
        int oneStep=climbStair(n-1,dp);
        int twoStep=climbStair(n-2,dp);
        return dp[n]=oneStep+twoStep;
    }

    int climbStairs(int n){
        vector<int> dp(n+1,-1);
        return climbStair(n,dp);
    }
};